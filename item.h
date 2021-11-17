/*
item.h
ITESM
Campus Querétaro
Programación de Estructuras de Datos y Algoritmos Fundamentales.
Cristian Leilael Rico Espinosa.
Matrícula: A01707023.
*/

#ifndef ITEM_H_
#define ITEM_H_

#include <iostream>
using namespace std;

class Item {

    private:

        int position;
        string type;
        string name;
        int quantity;

    public:
    
        Item(){
            
            position = 0;
            type = " ";
            name = " ";
            quantity = 0;

        };

        Item(int _position, string _type, string _name, int _quantity){

            position = _position;
            type = _type;
            name = _name;
            quantity = _quantity;

        };

        // Getters

        int getPosition(){
            return position;
        }

        string getType(){
            return type;
        }

        string getName(){
            return name;
        }

        int getQuantity(){
            return quantity;
        }

        // Setters

        void setPosition(int pos){
            position = pos;
        }

        void setType(string tp){
            type = tp;
        }

        void setName(string nm){
            name = nm;
        }

        void setQuantity(int qn){
            quantity = qn;
        }

};


#endif /* ITEM_H_ */