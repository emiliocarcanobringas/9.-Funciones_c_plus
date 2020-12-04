/*Este programa solicita al usuario la entrada estándar de (x, y) y nos da los valores de una función 
en la salida estándar sqrt(x)/(pow(y,2)-1)*/

#include <iostream> //Librería estándar de entrada y salida de datos
#include <locale.h> //Librería estándar de localización (regionalización)
#include <math.h> //Librería estándar de matemáticas básicas, permite usar la función "pow" y sqrt.

using namespace std; //Acceso al espacio de trabajo para poder usar las funciones: cin, cout, etc.

int main(){ //Inicio del programa

	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería estándar y le asignamos el valor: "Idioma español"

	/*Declaramos las variables principales y la variable que realizará la expresión matemática, esta
	última la iniciamos en cero*/
	float x,y,funcion = 0; 
	
	cout<<"Ingrese el valor de x: "<<endl; //Solicitamos el valor de x
	cin>>x; //Almacenamos el valor de x
	cout<<"\nIngrese el valor de y: "<<endl; //Solicitamos el valor de y, para el salto de línea colocamos: "\n"
	cin>>y; //Almacenamos el valor de y
	funcion = sqrt(x)/(pow(y,2)-1); //Operación de la función
	cout<<funcion<<endl; //Imprimimos el valor de la función
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/

