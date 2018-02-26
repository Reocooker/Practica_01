#include <iostream>
#include <math.h> 
#include <limits>
using namespace std;

// Jorge Alberto Mera Fermin
// ID:1066977
// Practica 00

int main() 
{
	int c = 0;  //Creando el contador que mantendra el bucle del menu
	while (c==0)
	{
		float resp = 0.0; //Creando la variable que contendra la respuesta deseado
		int flag = 0; 
	
	    cout << "Que es lo que desea calcular?\n" << "1) Area de un triangulo\n" << "2) Area de un trapecio\n" 
	     << "3) Volumen de un cono\n" << "4) Volumen de un cilindro\n" << "Introduzca el numero correspondiente a lo que desea(1-4): ";
	    cin >> resp; //Recibiendo respuesta
	    cout << endl;
	
  	    if (resp == 1.0)  //Calcular el area de un triangulo por formula de Heron
	    {
		     float lado1,lado2,lado3,semiper,area; //Nombrando las variables que contendran las longitudes de los lados, el semiperimentro y el area del triangulo.
		
		     cout << "Introduzca la longitud del primer, segundo y tercer lado del triangulo (separados por espacio): ";
		     cin >> lado1 >> lado2 >> lado3;
		     cout << "Primer lado: " << lado1 << "\nSegundo lado: " << lado2 << "\nTercer lado: " << lado3;
		
		     semiper = 0.5 * (lado1 + lado2 + lado3); //Calculando el semiperimetro
		     area = sqrt(semiper * (semiper - lado1) * (semiper - lado2) * (semiper - lado3)); //Calculando el area del triangulo
		     cout << "\nEl semiperimetro del triangulo es: " << semiper << "\nEl area (por formula de Heron) es: " << area << endl; //Imprimiendo el resultado
		     
		     c=1;
	    }
	
	    else if (resp == 2.0) //Calcular el area de un trapecio 
	    {
		    float base1,base2,altura,area; //Nombrando las variables que contendran las lognitudes de las bases, la altura y el area del trapecio
		
		    cout << "Introduzca la longitud de la base menor, la base mayor y la altura del trapecio (separados por espacio): ";
		    cin >> base1 >> base2 >> altura;
		    cout << "Base menor: " << base1 << "\nBase mayor: " << base2 << "\nAltura: " << altura;
		
		    area = ((base1 + base2) * altura) * 0.5; //Calculando el area del trapecio
		
		    cout << "\nEl area del trapecio es: " << area;
		    
		    c=1;
	    }
	
	     else if (resp == 3.0) //Calcular el volumen de un cono
     	{
		    float radio,altura,area,volumen,pi; //Nombrando las variables que contendran el radio, la altura, el area del circulo interior, el volumen y pi
		
		    cout << "Introduzca el radio y la altura del cono (separados por espacio): ";
		    cin >> radio >> altura;
		    cout << "Radio: " << radio << "\nAltura: " << altura;
		
		    pi = 3.14159265359; //Valor del pi
		    area = pi * pow(radio,2); //Calculando el area del circulo interior
		    volumen = (altura * area)/3; //Calculando el volumen del cono
		
		    cout << "\nEl area del circulo interior del cono es: " << area << "\nEl volumen del cono es: " << volumen;
		    
		    c=1;
	    } 
	
	    else if (resp == 4.0) //Calcular el volumen de un cilindro
	    {
		    float radio,altura,area,volumen,pi; //Nombrando las variables que contendran el radio, la altura, el area de la base circular, el volumen y pi
		
		    cout << "Introduzca el radio de la base circular y la altura del cilindro (separadas por espacio): ";
		    cin >> radio >> altura;
		    cout << "Radio: " << radio << "\nAltura: " << altura;
		 
		    pi = 3.14159265359; //Valor del pi
		    area = pi * pow(radio,2); //Calculando el area de la base circular
		    volumen = (altura * area); //Calculando el volumen del cilindro
		
		    cout << "\nEl area de la base circular del cilindro es: " << area << "\nEl volumen del cilindro es: " << volumen;
		    
		    c=1;
	   }
	
	   if (c==0) //Corrector de error de introduccion de caracter invalido
	   {
		   cout << "La respuesta que introdujo no es valida, introduzca un numero del 1 al 4.\n" << endl;  
		    cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
	   }
	   
	   if (c==1) //Repeticion del codigo
	   {
	   	   cout << endl << "\nDesea calcular otra cosa?\n" << "Introduzca 1 si lo desea, cualquier otro numero si desea salir: ";
	       cin >> resp;
	       cout << endl;
	   
	       if (resp == 1.0)
	       {
	   	        c=0;
	       }
	   }
   } 
   return 0;  
}
	

