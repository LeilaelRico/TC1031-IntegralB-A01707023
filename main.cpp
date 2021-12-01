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


void menu() {
    cout<<"\n--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**"<<endl;
    cout<<"1. Show item list."<<endl;
    cout<<"2. Show fastest path to destination."<<endl;
    cout<<"3. Show path to destination picking some objects."<<endl;
    cout<<"4. Exit."<<endl;
    cout<<"--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**"<<endl;
}


void menu1() {
    cout<<"1. From the south path."<<endl;
    cout<<"2. From north-east path."<<endl;
    cout<<"3. From the west path."<<endl;
}


int main() {

    Item it;
    vector<Item> ite;
    ifstream itList("items.txt");
    int pos, qua, opt, opt1;
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

    cor.loadGraphList("coordinates.txt", 21, 57);

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

                menu1();
                cout << "Choose one of the following options" << endl;
                cin >> opt1;

                if (opt1 == 1) {
                    cout<< "Item position:" <<endl;
                    cout << cor.BFS(0,18) << endl;
                    cout << "To show the item information, please use the first option"<<endl;
                } else if (opt1 == 2) {
                    cout<< "Item position:" <<endl;
                    cout << cor.BFS(19,18) << endl;
                    cout << "To show the item information, please use the first option"<<endl;
                } else if (opt1 == 3) {
                    cout<< "Item position:" <<endl;
                    cout << cor.BFS(20,18) << endl;
                    cout << "To show the item information, please use the first option"<<endl;
                } else {
                    cout<<"Invalid option, please, try again."<<endl;
                }
            
            break;


            case 3:

                menu1();
                cout << "Choose one of the following options" << endl;
                cin >> opt1;

                if (opt1 == 1) {
                    cout<< "Item position:" <<endl;
                    cout << cor.DFS(0,18) << endl;
                    cout << "To show the item information, please use the first option"<<endl;
                } else if (opt1 == 2) {
                    cout<< "Item position:" <<endl;
                    cout << cor.DFS(19,18) << endl;
                    cout << "To show the item information, please use the first option"<<endl;
                } else if (opt1 == 3) {
                    cout<< "Item position:" <<endl;
                    cout << cor.DFS(20,18) << endl;
                    cout << "To show the item information, please use the first option"<<endl;
                } else {
                    cout<<"Invalid option, please, try again."<<endl;
                }

            break;
        }

    }

    while(opt != 4);

    return 0;
}