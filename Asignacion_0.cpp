#include <iostream>
#include <math.h> 
using namespace std;

int main() 
{
	float resp; //Creando la variable que contendra la respuesta deseado 
	
	cout << "Que es lo que desea calcular?\n" << "1) Area de un triangulo\n" << "2) Area de un trapecio\n" 
	     << "3) Volumen de un cono\n" << "4) Volumen de un cilindro\n" << "Introduzca el numero correspondiente a lo que desea(1-4): ";
	
	cin >> resp; //Recibiendo respuesta
	
	if (resp == 1.0)  //Calcular el area de un triangulo por formula de Heron
	{
		float lado1,lado2,lado3,semiper,area; //Nombrando las variables que contendran las longitudes de los lados, el semiperimentro y el area del triangulo.
		
		cout << "Introduzca la longitud del primer lado del triangulo: ";
		cin >> lado1;
		cout << "Introduzca la longitud del segundo lado del triangulo: ";
		cin >> lado2;
		cout << "Introduzca la longitud del tercer lado del triangulo: ";
		cin >> lado3;
		
		semiper = 0.5 * (lado1 + lado2 + lado3); //Calculando el semiperimetro
		area = sqrt(semiper * (semiper - lado1) * (semiper - lado2) * (semiper - lado3)); //Calculando el area del triangulo
		cout << "El semiperimetro del triangulo es: " << semiper << "\nEl area (por formula de Heron) es: " << area << endl; //Imprimiendo el resultado
	}
	
	else if (resp == 2.0) //Calcular el area de un trapecio 
	{
		float base1,base2,altura,area; //Nombrando las variables que contendran las lognitudes de las bases, la altura y el area del trapecio
		
		cout << "Introduzca la longitud de la primera base del trapecio: ";
		cin >> base1;
		cout << "Introduzca la longitud de la segunda base del trapecio: ";
		cin >> base2;
		cout << "Introduzca la altura del trapecio: ";
		cin >> altura;	
		
		area = ((base1 + base2) * altura) * 0.5; //Calculando el area del trapecio
		
		cout << "El area del trapecio es: " << area;
	}
	
	else if (resp == 3.0) //Calcular el volumen de un cono
	{
		float radio,altura,area,volumen,pi; //Nombrando las variables que contendran el radio, la altura, el area del circulo interior, el volumen y pi
		
		cout << "Introduzca el radio del cono: ";
		cin >> radio;
		cout << "Introduzca la altura del cono: ";
		cin >> altura;
		
		pi = 3.14159265359; //Valor del pi
		area = pi * pow(radio,2); //Calculando el area del circulo interior
		volumen = (altura * area)/3; //Calculando el volumen del cono
		
		cout << "El area del circulo interior del cono es: " << area << "\nEl volumen del cono es: " << volumen;
	}
	
	else if (resp == 4.0) //Calcular el volumen de un cilindro
	{
		float radio,altura,area,volumen,pi; //Nombrando las variables que contendran el radio, la altura, el area de la base circular, el volumen y pi
		
		cout << "Introduzca el radio de la base circular del cilindro: ";
		cin >> radio;
		cout << "Introduzca la altura del cilindro: ";
		cin >> altura;
		
		pi = 3.14159265359; //Valor del pi
		area = pi * pow(radio,2); //Calculando el area de la base circular
		volumen = (altura * area); //Calculando el volumen del cilindro
		
		cout << "El area de la base circular del cilindro es: " << area << "\nEl volumen del cilindro es: " << volumen;
	}
	
	else
	{
		cout << "La respuesta que introdujo no es valida, ejecute de nuevo e introduzca un numero del 1 al 4.";
	}
	return 0;
}
