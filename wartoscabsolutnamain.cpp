#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 



{
int a;
cout<< "Podaj a "<<endl; 
cin >>a;


if(a>0)
{
	cout<<"a wynosi : "<<a<<endl;
}
else
{
 printf("Wartosc bezwzgledna z %d to %d\n", a, abs(a) );
	cout<<"a wynosi : "<<abs(a)<<endl;
}

	return 0;
}
