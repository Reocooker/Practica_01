#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;

// Jorge Alberto Mera Fermin
// ID:1066977
// Practica 01

int main()
{
    int size = 40; 
    char nombre[size];      //Variable que contendra el nombre
	cout << "Introduzca su nombre completo (Ej: Ramon Gerardo Guandule): ";
	cin.getline(nombre,size); //Recibiendo todos los caracteres, hasta los espacios en blanco
	
	size = 14;
	char cedula[size];     //Variable que contendra la cedula
	cout << "Introduzca su cedula (Ej: 904-2259576-0): ";
	cin >> setw(size) >> cedula;
	
	float precio,peso,costo; //Variables que contendran el precio y peso del producto y el costo del transporte respectivamente
	cout << "Introduzca el precio(USD$) y peso(lbs) de su articulo (Separados por espacio): ";
	cin >> precio >> peso;
	
	if (precio < 0)   //Cambiando el precio a positivo si el que se ingreso es negativo
	{
		precio = -1*precio;
	}
	if (peso < 0)
	{
		peso = -1*peso;  //Cambiando el peso a positivo si el que se ingreso es positivo
	}
	
	if (peso < 50)   //Para un peso menor de 50, aplicando los costos dados en la tabla
	{
		if (precio <= 25)
		{
		    costo = 15;
		} 
		else if (precio > 25 && precio <= 50)
		{
			costo = 10;
		}
		else if (precio > 50 && precio <= 75)
		{
			costo = 5;
		}
		else
		{
			costo = 0;
		}
	}
	else   //Para un peso mayor o igual que 50, el costo estara dado por la siguiente formula
	{
		costo = 25*(1-pow(1.01,(-9.21*peso)));
	}
	
	//Imprimiendo los resultados en forma de tabla
	cout << "\nEste es el resultado de su factura: \n";
	
	cout << setw(41) << "Nombre" << setw(21) << "Cedula" << setw(11) << "Peso" << setw(11) << "Precio" << setw(26) << "Costo de transporte\n";
	cout << fixed << setprecision(2); //Los resultados estaran dados con 2 decimales de precision
	cout << setw(41) << nombre << setw(21) << cedula << setw(11) << peso << setw(11) << precio << setw(26) << costo << endl;
	
	cout << "\nGracias por elegir KAOS! :)";
	
	return 0;
}

