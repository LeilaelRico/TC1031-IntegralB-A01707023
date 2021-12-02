# Fatal Frame V: 'Items' de la zona 'Unfathomable Forest'.
**Proyecto Integral "B" de Programación de Estructuras de Datos.**   

En este proyecto se muestran todas las cosas que pueden recorgerse de esta zona durante el último capítulo del juego en la dificultad *normal*, de igual manera, registra el punto de inicio en la entrada (puede ser en la entrada del sur, oeste o noreste) y el destino por el que se debe de avanzar en el centro-norte del mismo.

![grafo_FFV](graph.png)   
*Al no poder tomar una imagendel mapa completo, decidí incorporar una de un grafo que **fuera cercano** a las posiciones de los items.*

El programa carga dos archivos con extensión *.txt* y despliega su contenido haciendo uso de 3 funciones disponibles en el menú:   

* Mostrar la lista de objetos: Muestra los datos del archivo *items.txt* después de que estos pasen por una clase que los clasifica por tipos.   
* Mostrar la ruta más rápida para llegar al destino: Muestra los items que pueden ser recogidos en una ruta eficiente hacia el destino haciendo uso de *coordinates.txt* después de ser insertados en un grafo, dentro de la opción aparecerá un pequeño menú que permite seleccionar al usuario su punto de partida.   
* Mostrar la ruta hacia el destino recogiendo algunos objetos: Haciendo uso del mismo archivo de texto anteriormente mencionado, muestra una ruta que le permite al jugador recoger una mayor cantidad de objetos de camino al destino por una de las tres entradas. Como en la opción anterior, dentro de la opción aparecerá un pequeño menú que permite seleccionar al usuario su punto de partida.   
* Ordenar la cantidad de los Items: Se hace uso del *Counting Algorithm* para llevar a cabo esta operación; solamente muestra las cantidades y no las relaciona con sus respectivos nombres o elementos del objeto de la clase.
**Nota:** Para ver la posición que las funciones indican, será necesario desplegar la lista de items (opción 1).

## SICT0302B: Toma decisiones

### Usa grafos para hacer analisis de información.
El programa carga el archivo *coordinates.txt* para agregar la posición de los objetos dentro del grafo.   

### Usa un algoritmo de búsqueda en grafos adecuado para resolver un problema.

Para dos de las tres funciones disponibles, se hace uso del algoritmo *Breadth-First Search* para encontrar la ruta más óptima para llegar al destino recogiendo la menor cantidad de objetos posibles; por otra parte, se hace uso de *Depth-First Search* para ostrar una ruta que le permitiría al jugador tomar un poco más de objetos a lo largo del mapa.

## SICT0301B: Evalúa los componentes

### Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes.

* El grafo, que es el elemento principal en este programa, tiene una complejidad de ***O(n + m)*** para el peor de sus casos, esto también aplica para los algortimos de búsqueda utilizados.
* El *Counting Sort* posee una complejidad de ***O(n + k)*** para el peor de sus casos en lo que respecta a tiempo, mientras que, para la complejidad de espacio, para el peor de sus casos posee una de ***O(k)***.

### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa.

Se creó un archivo llamado *maintest.cpp* en el cual se evaluaron las funciones principales contenidas en *graph.h*, *Csort.h* e *item.h*.
* .printAdjList(): Devuelve la lista de adyacencia que se tiene entre los nodos.
* .DFS(inicio, fin): Ejecuta el algoritmpo de navegación de nodos *Depth-First Search* el cual muestra una ruta que siempre elige el nodo adycente de mayor tamaño hasta llegar al fin.
* .BFS(inicio, fin): Ejecuta el algoritmpo de navegación de nodos *Breadth-First Search* el cual muestra la ruta *óptima* para llegar al destino; analiza las direcciones que los nodos adyacentes pueden tomar para elegir la más apropiada.
* .setName/Position/Quantity/Type(Valor **int** o **string**): Los sets de la clase *item* funcionan similar para todas las partes del objeto; permiten obtener una parte específica del objeto con un tipo de dato específico, por ejemplo, *.setNombre()* recibe un dato tipo **string** el cual recibe la clasificación de *nombre* dentro del objeto.   
* .getName/Position/Quantity/Type(): Muestra el contenido de un objeto creado por la clase *item* para cada una de sus partes.   
* printArray(*nombre*): Imprime en pantalla el contenido de un array, esto se logra mediante un ciclo *for* que imprime el dato en la *i-ésima* posición del mismo.
* countSort(*nombre*): Se encarga de ordenar los datos dentro de un array mediante el algoritmo con un nombre similar al de la función, para mostrarlo ordenado en pantalla, es necesario utilizar la función anteriormente descrita.   

## SEG0702A Tecnologías de Vanguardia

### Investiga e implementa un algoritmo o una estructura de datos que no se vió durante el curso.

**Counting Sort**   
Ordena el contenido de un rango específico contando el número de objetos con valores distintivos de *tipo llave*.   
En base a *GeeksfotGeeks*, algunas de las cosas que deben de saberse sobre este algoritmo son:
1. Eficiente si el rango de la información no es más grande que el número de objetos que deben de oredenarse.
2. Usualmente es utilizado como una subrutina de otros algoritmos de ordenamiento.
3. Utiliza un **hashing** parcial para contar la cantidad de ocurrencias que hay en la información.
4. Puede trabajar con números negativos si es programado para hacerlo.

### Describe cada algoritmo de la estructura (inserción, consulta, etc...) de forma clara y con ejemplos.

Este algoritmo se ejecuta dentro de una función *void*:
1. Identifica cuál es el elemento más grande.   
<p style = 'text-align:center;'>
<img src="https://cdn.programiz.com/cdn/farfuture/_iojSNQFxCvNdbdPPmMVCJZxGFTS0TOZRIt1E4Wte0Y/mtime:1582112622/sites/tutorial2program/files/Counting-sort-0_0.png" alt="JuveYell" width="900px">

2. Inicializa otro vector *count* con todos sus espacios en 0 y un espacio extra.   

<p style = 'text-align:center;'>
<img src="https://cdn.programiz.com/cdn/farfuture/bRDNfPQG8lie6m7EFXVqPj8w6RzkRhM34XNaAoG2dCs/mtime:1582112622/sites/tutorial2program/files/Counting-sort-1.png" alt="JuveYell" width="900px">

3. Cuenta los elementos dentro del vector original. 

4. Guarda las cuentas hechas en el vector *count* en los lugares correspondientes de los valores. 

<p style = 'text-align:center;'>
<img src="https://cdn.programiz.com/cdn/farfuture/6A5S6vY-KsapHcyBjGgLNrp-58NRdyGDeVXspSzUbwM/mtime:1582112622/sites/tutorial2program/files/Counting-sort-3.png" alt="JuveYell" width="900px">

5. Aumenta en 1 la cuenta que lleva de un valor si este se repite.   

6. Después de finalizar el proceso de conteo, compara la posición que los valores tenían en el vector original con el número de veces que fueron contados en el otro.   
7. Por medio de una resta hecha entre la posición del elemento en el vector principal con el número presente en *count*, se asigna el espacio que este ocupará finalmente:
<div>
<p style = 'text-align:center;'>
<img src="https://cdn.programiz.com/cdn/farfuture/tcfjQdeYwL_jETOCPZxNjIXbysRrb7MaG6PwO2MzHnM/mtime:1582112622/sites/tutorial2program/files/Counting-sort-4_1.png" alt="JuveYell" width="900px">
</p>
</div>


## Recursos utilizados

* @ericdrowell. (s. f.). Big-O Algorithm Complexity Cheat Sheet (Know Thy Complexities!). Big-O Complexity Chart. https://www.bigocheatsheet.com/
* GeeksforGeeks. (2021, 12 septiembre). Counting Sort. https://www.geeksforgeeks.org/counting-sort/
* Programiz. (s. f.). Counting Sort (With Code). https://www.programiz.com/dsa/counting-sort

