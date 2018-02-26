#include <iostream>

using namespace std;

int main()
{
	float x [17];
	int n = 0;
	float y[17] = {};
	
	
	while (n <= 16)
	{
		cout << "Ingrese el valor de x en la posicion " << n << ": ";
		cin >> x[n];
		n = n+1;
	}
	
    n=2;
    
    while (n <= 16)
    {
    	y[n] = (x[n] + x[n-1] + x[n-2])/3.0;
    	n=n+1;
	}
	cout << "\nEl promedio movil es: ";
	
	n=0;
	
	while (n <= 16)
	{
		cout << y[n] << " ";
		n=n+1;
	}
	
	return 0;	
} 
