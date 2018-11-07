# Relación entre apuntadores y arreglos en lenguaje C

Los arreglos y los apuntadores están estrechamente relacionados y se pueden utilizar de manera casi intercambiable. El nombre de un arreglo puede considerarse como un apuntador al primer elemento de dicho arreglo. 
Un arreglo es una colección de variables del mismo tipo que se referencian por un nombre común y a un elemento específico de un arreglo se accede mediante el nombre de dicho arreglo y un índice.
Físicamente los elementos de un arreglo están ubicados en posiciones de memoria contiguas.
La forma general de declarar un arreglo unidimensional  es declarar el tipo de variable que va a almacenar el arreglo, el nombre del arreglo y el número de elementos que va a contener dicho arreglo, de la siguiente manera:
tipodato nombrearreglo[tamaño];
Una forma alternativa de definir un arreglo es indicando el tipo de variable que va a almacenar el arreglo, el nombre del arreglo y una lista de los elementos que va a almacenar dicho arreglo, como se indica a continuación:
tipodato nombrearreglo[] = {lista de elementos del tipo tipodato}
A continuación se declara un arreglo de datos numéricos enteros con una capacidad de almacenar 5 variables enteras en total:
// Se declara un arreglo de enteros de cinco elementos
int b[] = {1,2,3,4,5};
Un apuntador es una variable que contiene una dirección de memoria que corresponde a la ubicación de otra variable en memora.
Un apuntador se declara con un tipo base, el símbolo * y el nombre del apuntador, de la siguiente manera:
tipodato *nombreapuntador;
Supongamos que definimos un apuntador a variables de tipo entero mediante  la siguiente declaración
// Se declara un apuntador a variables de tipo entero
int *intPtr;
Al invocar el nombre del arreglo, estamos haciendo referencia a la dirección de memoria donde está almacenado el primer elemento de dicho arreglo, con la particularidad que es un puntero constante que no puede apuntar a otra variable distinta a aquella a la cual fue definida inicialmente.
El nombre del arreglo de enteros b es un apuntador al primer elemento de dicho arreglo, por lo tanto podemos hacer que el apuntador a entero declarado intPtr apunte al primer elemento del arreglo de enteros b con la siguiente sentencia
// Asigna el valor de la dirección del primer elemento del arreglo de enteros b al apuntador intPtr
intPtr = b;
La sentencia anteriormente indicada es en esencia equivalente a asignar al apuntador de enteros intPtr el valor de la dirección de memoria del primer elemento del arreglo de enteros b de la siguiente manera:
// Igualmente asigna el valor de la dirección del primer elemento del arreglo de enteros b al apuntador intPtr
intPtr = &b[0];
Es  equivalente referirse al nombre del arreglo declarado b, o a la dirección del  primer elemento de dicho arreglo &b[0].
Una vez asignado el valor de la dirección del primer elemento del arreglo al apuntador intPtr, se muestra el valor de estos dos elementos
// Se muestra la direccion del primer elemento del arreglo de enteros b y el valor asignado al apuntador intPtr
cout << "\nLa direccion de memoria del primer elemento del arreglo b es: " << b << endl;
cout << "\nLa direccion de memoria contenida en el apuntador intPtr es:  " << intPtr << endl;
Formatos de acceso a los elementos de un arreglo
Existen diferentes maneras de acceder al contenido de un arreglo, a través del nombre del arreglo o a través del apuntador que toma el valor del primer elemento de dicho arreglo, en la siguiente línea se indican las diferentes formas de hacer referencia al primer elemento del arreglo:
Las siguientes sentencias son equivalentes:
b[0];  
*intPtr;  
*b;  
intPtr[0];  
A continuación se indican las diferentes maneras de acceder al primer elemento del arreglo de enteros b[] y mostrar su contenido:
// Diferentes formas de acceder al valor del primer elemento del arreglo de enteros b
cout << "\nDiferentes maneras de acceder al primer elemento del arreglo de enteros b:" << endl;
cout << "\nEl primer elemento del arreglo es: b[0] =      " << b[0] << endl;
cout << "\nEl primer elemento del arreglo es: *intPtr =   " << *intPtr << endl;
cout << "\nEl primer elemento del arreglo es: *b =        " << *b << endl;
cout << "\nEl primer elemento del arreglo es: intPtr[0] = " << intPtr[0] << endl;
Para acceder a un elemento especifico del arreglo de enteros, se puede acceder al mismo usando la aritmética de apuntadores de la siguiente manera
Acceder al elemento 3 del arreglo de enteros b usando como referencia el apuntador a entero intPtr
*(intPtr + 3)
A continuación se indican las diferentes maneras de acceder al tercer elemento del arreglo de enteros b[] y mostrar su contenido:
// Diferentes formas de acceder al valor del tercer elemento del arreglo de enteros b
cout << "\nDiferentes maneras de acceder al tercer elemento del arreglo de enteros b:" << endl;
cout << "\nEl tecer elemento del arreglo es: b[2] =          " << b[2] << endl;
cout << "\nEl tercer elemento del arreglo es: *(intPtr + 2)= " << *(intPtr + 2) << endl;
cout << "\nEl tercer elemento del arreglo es: *(b + 2) =     " << *(b + 2) << endl;
cout << "\nEl tercer elemento del arreglo es: intPtr[2] =    " << intPtr[2] << endl;
Para realizar el recorrido del arreglo se puede hacer de diferentes formas según las alternativas de representación del arreglo que existen:
Se puede recorrer el arreglo a través de sus índices:
// Recorrido del arreglo b a través de sus indices
cout << "\nRecorrido del arreglo b a través de sus indices\n";
for(int i = 0; i < n; i++){
	cout << "b[" << i << "] " << b[i] << endl;
}
Se puede recorrer el arreglo por incremento del valor del apuntador:
// Recorrido del arreglo b a través del puntero intPtr
cout << "\nRecorrido del arreglo b a través del puntero intPtr\n";
for(int i = 0; i < n; i++){
	cout << "*(intPtr + " << i << ") " << *(intPtr + i) << endl;
}
Actividad: realice un programa en lenguaje C++ que recorra el arreglo de enteros b a través de los restantes formatos de acceso que se presentaron con anterioridad
