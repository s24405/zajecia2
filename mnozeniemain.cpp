#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 

{
int a,b,c;
cout<< "Podaj a "<<endl; 
cin >>a;
cout << "Podaj b "<<endl; 
cin >>b;

if(a>b)
{
	cout<<"wieksza liczba : "<<a<<endl;
}
else
{
	cout<<"wieksza liczba : "<<b<<endl;
}

	return 0;
}
