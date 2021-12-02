/*
maintest.cpp
ITESM
Campus Querétaro
Programación de Estructuras de Datos y Algoritmos Fundamentales.
Cristian Leilael Rico Espinosa.
Matrícula: A01707023.
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

#include "item.h"
#include "graph.h"
using namespace std;

int main(int argc, char* argv[]) {

    Graph g;
    string g_ans, s_ans;
    int int_ans;
    Item itm;


    g.loadGraphList("coortest.txt", 8, 16);

    //g.printAdjList()
    g_ans = "vertex 0 : 1 2 vertex 1 : 0 2 2 5 5 6 vertex 2 : 0 1 1 4 6 6 vertex 3 : 7 vertex 4 : 2 7 vertex 5 : 1 1 6 6 7 vertex 6 : 1 2 2 5 5 vertex 7 : 3 4 5 ";
    cout << "\n" <<"1. Esperada: " << g_ans << "\nPrograma: " << g.printAdjList() << "\n";
    cout <<	(!g_ans.compare(g.printAdjList()) ? "Success\n" : "Fail\n");

    //g.DFS(1,7)
    g_ans = " 1 6 5 7";
    cout << "\n" <<"2. Esperada: " << g_ans << "\nPrograma: " << g.DFS(1,7) << "\n";
    cout <<	(!g_ans.compare(g.DFS(1,7)) ? "Success\n" : "Fail\n");

    //g.BFS(1,7)
    g_ans = " 1 5 7";
    cout << "\n" <<"3. Esperada: " << g_ans << "\nPrograma: " << g.BFS(1,7) << "\n";
    cout <<	(!g_ans.compare(g.BFS(1,7)) ? "Success\n" : "Fail\n");

     //g.DFS(5,4)
    g_ans = " 5 7 4";
    cout << "\n" <<"4. Esperada: " << g_ans << "\nPrograma: " << g.DFS(5,4) << "\n";
    cout <<	(!g_ans.compare(g.DFS(5,4)) ? "Success\n" : "Fail\n");

    //g.BFS(5,4)
    g_ans = " 5 7 4";
    cout << "\n" <<"5. Esperada: " << g_ans << "\nPrograma: " << g.BFS(5,4) << "\n";
    cout <<	(!g_ans.compare(g.BFS(5,4)) ? "Success\n" : "Fail\n");

   
    itm.setName("Proof");
    itm.setPosition(78);
    itm.setQuantity(65);
    itm.setType("Example"); 


    //get & set position
    int_ans = 78;
    cout << "\n" <<"6. Esperada: " << int_ans << "\nPrograma: " << itm.getPosition() << "\n";
    if (int_ans == itm.getPosition()){
        cout << "Success" << endl;
    }else{
        cout << "Fail" << endl;
    }

    //get & set quantity
    int_ans = 65;
    cout << "\n" <<"7. Esperada: " << int_ans << "\nPrograma: " << itm.getQuantity() << "\n";
    if (int_ans == itm.getQuantity()){
        cout << "Success" << endl;
    }else{
        cout << "Fail" << endl;
    }
    
    //get & set name
    s_ans = "Proof";
    cout << "\n" <<"8. Esperada: " << s_ans << "\nPrograma: " << itm.getName() << "\n";
    if (s_ans == itm.getName()){
        cout << "Success" << endl;
    }else{
        cout << "Fail" << endl;
    }
     
    //get & set type
    s_ans = "Example";
    cout << "\n" <<"9. Esperada: " << s_ans << "\nPrograma: " << itm.getType() << "\n";
    if (s_ans == itm.getType()){
        cout << "Success" << endl;
    }else{
        cout << "Fail" << endl;
    }
}