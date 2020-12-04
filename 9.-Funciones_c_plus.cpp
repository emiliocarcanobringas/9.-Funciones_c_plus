/*Este programa solicita al usuario la entrada est�ndar de (x, y) y nos da los valores de una funci�n 
en la salida est�ndar sqrt(x)/(pow(y,2)-1)*/

#include <iostream> //Librer�a est�ndar de entrada y salida de datos
#include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)
#include <math.h> //Librer�a est�ndar de matem�ticas b�sicas, permite usar la funci�n "pow" y sqrt.

using namespace std; //Acceso al espacio de trabajo para poder usar las funciones: cin, cout, etc.

int main(){ //Inicio del programa

	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a est�ndar y le asignamos el valor: "Idioma espa�ol"

	/*Declaramos las variables principales y la variable que realizar� la expresi�n matem�tica, esta
	�ltima la iniciamos en cero*/
	float x,y,funcion = 0; 
	
	cout<<"Ingrese el valor de x: "<<endl; //Solicitamos el valor de x
	cin>>x; //Almacenamos el valor de x
	cout<<"\nIngrese el valor de y: "<<endl; //Solicitamos el valor de y, para el salto de l�nea colocamos: "\n"
	cin>>y; //Almacenamos el valor de y
	funcion = sqrt(x)/(pow(y,2)-1); //Operaci�n de la funci�n
	cout<<funcion<<endl; //Imprimimos el valor de la funci�n
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/

