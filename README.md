# Relación entre apuntadores y arreglos en lenguaje C

Los arreglos y los apuntadores están estrechamente relacionados y se pueden utilizar de manera casi intercambiable. El nombre de un arreglo puede considerarse como un apuntador.  
Supongamos las siguientes declaraciones  

// Se declara un arreglo de enteros de cinco elementos  
int b[5];  

// Se declara un apuntador a entero  
int *bPtr;  

El nombre del arreglo es un apuntador al primer elemento del arreglo, por lo tanto podemos hacer que el apuntador declarado bPtr apunte al primer elemento del arreglo de enteros b con la siguiente sentencia  

// Asigna el valor de la dirección del primer elemento del arreglo de enteros b al apuntador bPtr  
bPtr = b;  

La sentencia anteriormente indicada es en esencia equivalente a asignar al apuntador de enteros b el valor de la dirección del primer elemento del arreglo de enteros b de la siguiente manera

// Igualmente asigna el valor de la dirección del primer elemento del arreglo de enteros b al apuntador bPtr
bPtr = &b[0];

Para acceder a un elemento especifico del arreglo de enteros, se puede acceder al mismo usando la aritmética de apuntadores de la siguiente manera

// Acceder al elemento 3 del arreglo de enteros b usando como referencia el apuntador a entero bPtr
*(bPtr + 3)
