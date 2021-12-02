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
    string g_ans, g_ans_2;

    g.loadGraphList("coortest.txt", 8, 16);

    //g.printAdjList()
    g_ans = "vertex 0 : 1 2 vertex 1 : 0 2 2 5 5 6 vertex 2 : 0 1 1 4 6 6 vertex 3 : 7 vertex 4 : 2 7 vertex 5 : 1 1 6 6 7 vertex 6 : 1 2 2 5 5 vertex 7 : 3 4 5 ";
    cout << "\n" <<"1. Esperada: " << g_ans << "\nPrograma: " << g.printAdjList() << "\n";
    cout <<	(!g_ans.compare(g.printAdjList()) ? "success\n" : "fail\n");

    //g.DFS(1,7)
    g_ans = " 1 6 5 7";
    cout << "\n" <<"2. Esperada: " << g_ans << "\nPrograma: " << g.DFS(1,7) << "\n";
    cout <<	(!g_ans.compare(g.DFS(1,7)) ? "success\n" : "fail\n");

    //g.BFS(1,7)
    g_ans = " 1 5 7";
    cout << "\n" <<"3. Esperada: " << g_ans << "\nPrograma: " << g.BFS(1,7) << "\n";
    cout <<	(!g_ans.compare(g.BFS(1,7)) ? "success\n" : "fail\n");

     //g.DFS(5,4)
    g_ans = " 5 7 4";
    cout << "\n" <<"4. Esperada: " << g_ans << "\nPrograma: " << g.DFS(5,4) << "\n";
    cout <<	(!g_ans.compare(g.DFS(5,4)) ? "success\n" : "fail\n");

    //g.BFS(5,4)
    g_ans = " 5 7 4";
    cout << "\n" <<"5. Esperada: " << g_ans << "\nPrograma: " << g.BFS(5,4) << "\n";
    cout <<	(!g_ans.compare(g.BFS(5,4)) ? "success\n" : "fail\n");


}