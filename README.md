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

