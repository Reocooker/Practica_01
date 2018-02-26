#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int count,random_limit,a,b,c,d,e,f,num;
	srand(time(NULL));
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;
	
	count = 0;
	while (count <= 10000)
	{
		random_limit = rand()%5;
		if (random_limit == 0)
		{
			a = a+1;
		}
		else if (random_limit == 1)
		{
			b = b+1;
		}
		else if (random_limit == 2)
		{
			c = c+1;
		}
		else if (random_limit == 3)
		{
			d = d+1;
		}
		else if (random_limit == 4)
		{
			e = e+1;
		}
		else if (random_limit == 5)
		{
			f = f+1;
		}
		count = count + 1;
	}
	
	cout << "Veces que resulto 0: " << a << "\nVeces que resulto 1: " << b << "\nVeces que resulto 2: " << c << "\nVeces que resulto 3: " << d 
	<< "\nVeces que resulto 4: " << e << "\nVeces que resulto 5: " << f;
	
	return 0;
}
