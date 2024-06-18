#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	int a;
	string op;
	cout<<"Programa para calcular si un año es bisiesto o no lo es"<<endl;
	cout<<"*Introduzca el año:"<<endl;
	cin>>a;
	if (a%4==0&&a%100!=0||a%400==0) {
		cout<<"El año ingresado es bisiesto"<<endl;
	} else {
		cout<<"El año ingresado no es bisiesto"<<endl;
	}

	return 0;	
}