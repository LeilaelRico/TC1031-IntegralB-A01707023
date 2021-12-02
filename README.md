# Fatal Frame V: 'Items' de la zona 'Unfathomable Forest'.
**Proyecto Integral "B" de Programación de Estructuras de Datos.**   

En este proyecto se muestran todas las cosas que pueden recorgerse de esta zona durante el último capítulo del juego en la dificultad *normal*, de igual manera, registra el punto de inicio en la entrada del sur del mapa y el destino por el que se debe de avanzar en el centro-norte del mismo. Hasta el momento, esta es la única ruta que se considera y, por esta misma razón, los algoritmos no mostrarán un recorrido que permita recoger objetos que estén alejados de esta ruta.   

El programa carga dos archivos con extensión *.txt* y despliega su contenido haciendo uso de 3 funciones disponibles en el menú:   

* Mostrar la lista de objetos: Muestra los datos del archivo *items.txt* después de que estos pasen por una clase que los clasifica por tipos.   
* Mostrar la ruta más rápida para llegar al destino: Muestra los items que pueden ser recogidos en una ruta eficiente hacia el destino haciendo uso de *coordinates.txt* después de ser insertados en un grafo.   
* Mostrar la ruta hacia el destino recogiendo algunos objetos: Haciendo uso del mismo archivo de texto anteriormente mencionado, muestra una ruta que le permite al jugador recoger una mayor cantidad de objetos de camino al destino por una de las tres entradas.   
* Ordenar la cantidad de los Items: Se hace uso del *Counting Algorithm* para llevar a cabo esta operación; solamente muestra las cantidades y no las relaciona con sus respectivos nombres o elementos del objeto de la clase.
**Nota:** Para ver la posición que las funciones indican, será necesario desplegar la lista de items (opción 1).

## SICT0302B: Toma decisiones

### Usa grafos para hacer analisis de información.
El programa carga el archivo *coordinates.txt* para agregar la posición de los objetos dentro del grafo.   

### Usa un algoritmo de búsqueda en grafos adecuado para resolver un problema.

Para dos de las tres funciones disponibles, se hace uso del algoritmo *Breadth-First Search* para encontrar la ruta más óptima para llegar al destino recogiendo la menor cantidad de objetos posibles; por otra parte, se hace uso de *Depth-First Search* para ostrar una ruta que le permitiría al jugador tomar un poco más de objetos a lo largo del mapa.

## SICT0301B: Evalúa los componentes

### Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes.

* El grafo, que es el elemento principal en este programa, tiene una complejidad de ***O(n + m)*** para el pero de sus casos, esto también aplica para los algortimos de búsqueda utilizados.

### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa.

Texto

## SEG0702A Tecnologías de Vanguardia

### Investiga e implementa un algoritmo o una estructura de datos que no se vió durante el curso.

Texto

### Describe cada algoritmo de la estructura (inserción, consulta, etc...) de forma clara y con ejemplos.

Texto

## Recursos utilizados

* https://www.geeksforgeeks.org/counting-sort/
