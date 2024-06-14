#include <iostream>
using namespace std;
int main()
{
	int op;
	char v;
	cout<<"Si las vocales se representan con numeros del 1 al 5, ingrese un numero."<<endl;
	cin>>op;
	switch (op) {
		case 1:
			v='A';
			break;
		case 2:
			v='E';
			break;
		case 3:
			v='I';
			break;
		case 4:
			v='O';
		case 5:
			v='U';
			break;
		default:
			cout<<"Ingrese un numero valido"<<endl;
			return 0;
	}
	cout<<"La vocal es "<<v<<endl;
	return 0;
}