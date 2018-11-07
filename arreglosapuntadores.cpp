/*Un programa simple en C++ para mostrar la relacion entre los arreglos y los apuntadores en lenguaje C++*/

/*Autor: Ing. Danny Colmenares
  @dbcolmenaresp*/

/*Directiva de preprocesador que le indica al compilador que agregue el contenido del archivo iostream
este archivo debe incluirse en un programa que use las funciones para mostrar informacion en la pantalla o leer
informacion del teclado*/
#include <iostream>

/*Directiva usada para indicar que se van a usar las funciones de salida de datos por pantalla y 
entrada de datos por teclado*/
using std::cout;
using std::cin;
using std::endl;

int main(){		//Inicio de la funcion principal

	// Se declara un arreglo de enteros de cinco elementos
	int b[] = {1,2,3,4,5};
	// Variable que indica el numero de elementos almacenados en el arreglo b
	int n = 5;
	// Se declara un apuntador a variables de tipo entero
	int *intPtr;
	
	//Presentacion
	cout << "Programa realizado para mostrar la relacion entre los arreglos y los apuntadores\n";
	cout << "Programa realizado con fines educativos\n";
	cout << "Programa realizado por Ing. Danny Colmenares\n";
	cout << "Contacto twitter @dbcolmenaresp\n";

	// Asigna el valor de la dirección del primer elemento del arreglo de enteros b al apuntador intPtr
	intPtr = b;

	// Se muestra la direccion del primer elemento del arreglo de enteros b y el valor asignado al apuntador intPtr
	cout << "\nLa direccion de memoria del primer elemento del arreglo b es: " << b << endl;
	cout << "\nLa direccion de memoria contenida en el apuntador intPtr es:  " << intPtr << endl;

	// Diferentes formas de acceder al valor del primer elemento del arreglo de enteros b
	cout << "\nDiferentes maneras de acceder al primer elemento del arreglo de enteros b:" << endl;
	cout << "\nEl primer elemento del arreglo es: b[0] =      " << b[0] << endl;
	cout << "\nEl primer elemento del arreglo es: *intPtr =   " << *intPtr << endl;
	cout << "\nEl primer elemento del arreglo es: *b =        " << *b << endl;
	cout << "\nEl primer elemento del arreglo es: intPtr[0] = " << intPtr[0] << endl;
	
	// Diferentes formas de acceder al valor del tercer elemento del arreglo de enteros b
	cout << "\nDiferentes maneras de acceder al tercer elemento del arreglo de enteros b:" << endl;
	cout << "\nEl tecer elemento del arreglo es: b[2] =          " << b[2] << endl;
	cout << "\nEl tercer elemento del arreglo es: *(intPtr + 2)= " << *(intPtr + 2) << endl;
	cout << "\nEl tercer elemento del arreglo es: *(b + 2) =     " << *(b + 2) << endl;
	cout << "\nEl tercer elemento del arreglo es: intPtr[2] =    " << intPtr[2] << endl;

	// Recorrido del arreglo b a traves de sus indices
	cout << "\nRecorrido del arreglo b a traves de sus indices\n";
	for(int i = 0; i < n; i++){
		cout << "b[" << i << "] " << b[i] << endl;
	}

	// Recorrido del arreglo b a traves del puntero intPtr
	cout << "\nRecorrido del arreglo b a traves del puntero intPtr\n";
	for(int i = 0; i < n; i++){
		cout << "*(intPtr + " << i << ") " << *(intPtr + i) << endl;
	}
	
	return 0; 	//indica que el programa temino satisfactoriamente
}
