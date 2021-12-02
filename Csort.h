/*
Csort.h
ITESM
Campus Querétaro
Programación de Estructuras de Datos y Algoritmos Fundamentales.
Cristian Leilael Rico Espinosa.
Matrícula: A01707023.

Original code by Nancy Den
https://www.tutorialspoint.com/cplusplus-program-to-implement-counting-sort
*/


#include <iostream>
#include <algorithm>
using namespace std;

void display(int *array, int size) {
   for(int i = 1; i<=size; i++)
      cout << array[i] << " ";
   cout << endl;
}
int getMax(int array[], int size) {
   int max = array[1];
   for(int i = 2; i<=size; i++) {
      if(array[i] >= max)
         max = array[i];
   }
   return max;  // Regresa el número mayor dentro del array.
}
void countSort(int *array, int size) {

   int output[size];
   int max = getMax(array, size);
   int count[max];  //Crea un array que servirá para "contar".

   for(int i = 0; i<=max; i++)
      count[i] = 0;  // Se inicializa en 0.

   for(int i = 1; i <=size; i++)
      count[array[i]]++;  //Aumenta el array en 1.

   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];  // Encuentra la frecuencia con la que un número se repite.

   for(int i = size; i>=1; i--) {
      output[count[array[i]]] = array[i];
      count[array[i]] -= 1;  // Disminuye en 1 la cuenta del mismo número.
   }
   for(int i = 1; i<=size; i++) {
      array[i] = output[i];  //Se iguala al array final
   }
}