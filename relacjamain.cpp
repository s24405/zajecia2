#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 

{
int a,b;
cout<< "Podaj a "<<endl; 
cin >>a;
cout << "Podaj b "<<endl; 
cin >>b;

if(a>b)
{
	cout<<"a>b"<<endl;
}
else if(a<b)
{
	cout<<"a<b"<<endl;
}
	else 	
	{
		cout<<"a=b"<<endl;			
	}
	


	return 0;
}
