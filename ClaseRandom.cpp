#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int random,limit,random_limit,count,num;
	srand(time(NULL));
	limit = 27;
	
	random = rand();
	
	count = 0;
	while (count <= 1000)
	{
		random_limit = rand()%5;
		if (random_limit== 27)
		{
			count = 1001;
		}
		count = count + 1;
	}
	//random_limit = rand()%(27 + 1);


	cout << random << endl << endl;
	cout << random_limit;
	
	return 0;
}

