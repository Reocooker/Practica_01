#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	float mpg,resp,precio,flag;
	
	cout << "Introduzca cuantas millas por galon consume su vehiculo (millas por galon): ";
	cin >> mpg;
	
	cout << "\nDesea introducir su propio precio por galon o utilizar el precio que esta actualmente?\n" << "1)Mi propio precio\n" 
	<< "2)El precio del internet (234.4 DOP por galon)\n" << "\nIntroduzca el numero correspondiente a su respuesta (1 o 2): ";
	cin >> resp;
	
	if (resp==2.0)
	{
	     precio = 234.400;
	     flag = 1.0;
    }
    
    else if (resp == 1.0)
    {
    	cout << "\nIntroduzca el precio por galon que se va a utilizar ($DOP por galon): ";
    	cin >> precio;
    	
    	if (precio<=0.0)
    	{
    	     cout << "Se utilizara el precio actual del galon ya que introdujo 0 o un valor negativo (234.40 DOP por galon)\n";
    	     precio = 234.400;
        }
       flag = 1.0; 
    }
    
    if (flag==1.0)
    {
	
        float distancia, costo;
		
	    cout << "\nQue distancia usted va a recorrer? (Km): ";
	    cin >> distancia;
	
	    distancia = distancia * 0.621;
		
	    costo = (distancia/mpg) * precio;
		
	    cout << "\nEl costo de su viaje es: DOP$ " << fixed << setprecision(3) << costo;
	}
    
    else
    {
    	cout << "\nEjecute el programa de nuevo e introduzca una respuesta valida (1 o 2)";
	}
	return 0;
}
