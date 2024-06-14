#include <iostream>
using namespace std;
string vocal(int selec) {
	string v;
		switch (selec) {
		case 1:
			v="La vocal es A";
			break;
		case 2:
			v="La vocal es E";
			break;
		case 3:
			v="La vocal es I";
			break;
		case 4:
			v="La vocal es O";
		case 5:
			v="La vocal es U";
			break;
		default:
			v="Ingrese un numero valido";
	}
			return v;
}
int main()
{
	int op;
	string v;
	cout<<"Si las vocales se representan con numeros del 1 al 5, ingrese un numero."<<endl;
	cin>>op;
	v=vocal(op);
	cout<<v<<endl;
	return 0;
}