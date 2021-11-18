/*
main.cpp
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


/*void loadItems()
{

    Item it;
    vector<Item> ite;
    ifstream itList("items.txt");
    int pos, qua;
    string typ, nam;

    while(itList.peek() != EOF)
    {

        if(itList>>pos>>typ>>nam>>qua)
        {

            it.setPosition(pos);
            it.setType(typ);
            it.setName(nam);
            it.setQuantity(qua);
            ite.push_back(it);

        }

    }
    itList.close();
}


void showItems(vector<Item> m)
{

    for(int i = 0; i<m.size(); i++)
    {

        cout<<"\n--------------------------------";
        cout<<"\nPosition: "<<m[i].getPosition()<<
        ", "<<"Type: "<<m[i].getType()<<
        ", "<<"Name: "<<m[i].getName()<<
        ", "<<"Quantity: "<<m[i].getQuantity()<<endl;

    }

}*/


void menu() {
    cout<<"\n--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**"<<endl;
    cout<<"1. Show item list."<<endl;
    cout<<"2. Show fastest path to destination."<<endl;
    cout<<"3. Show path to destination picking some objects."<<endl;
    cout<<"4. Exit."<<endl;
    cout<<"--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**"<<endl;
}

int main() {

    Item it;
    vector<Item> ite;
    ifstream itList("items.txt");
    int pos, qua, opt;
    string typ, nam;
    Graph cor;

    while(itList.peek() != EOF)
    {

        if(itList>>pos>>typ>>nam>>qua)
        {

            it.setPosition(pos);
            it.setType(typ);
            it.setName(nam);
            it.setQuantity(qua);
            ite.push_back(it);

        }

    }
    itList.close();

    cor.loadGraphList("coordinates.txt", 19, 53);
    cor.BFS(0,18);
    cor.DFS(0,18);

    do{

        menu();
        cout << "Choose one of the following options: ";
        cin >> opt;

        switch(opt){

            case 1:

                for(int i = 0; i<ite.size(); i++) {

                    cout<<"\nPosition: "<<ite[i].getPosition()<<
                    ", "<<"Type: "<<ite[i].getType()<<
                    ", "<<"Name: "<<ite[i].getName()<<
                    ", "<<"Quantity: "<<ite[i].getQuantity()<<endl;

                }
            break;


            case 2:

                cout<< "Item position:" <<endl;
                cout << cor.BFS(0,18) << endl;
                cout << "To show the item information, please use the first option"<<endl;
            
            break;


            case 3:

                cout<< "Item position:" <<endl;
                cout << cor.DFS(0,18) << endl;
                cout << "To show the item information, please use the first option"<<endl;

            break;


        }

    }

    while(opt != 4);

    return 0;
}