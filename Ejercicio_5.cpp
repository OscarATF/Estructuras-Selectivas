#include <iostream>
using namespace std;
int main()
{
	double edad,numP;
	char sexo;
		cout<<"Programa para calcular el numero de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aerobico."<<endl;
		cout<<"Introduzca su edad:"<<endl;
		cin>>edad;
		while (edad<=0) {
			cout<<"Introduzca una edad valida"<<endl;
			cin>>edad;
		}
		cout<<"Escriba\n(H) si es hombre\n(M) si es mujer)"<<endl;
		cin>>sexo;
		switch (sexo){
			case 'H':
				numP=(210-edad)/10;
				cout<<"su numero de pulsaciones debe ser "<<numP<<" por cada 10 segundos de ejercicio"<<endl;
				break;
			case 'M':
				numP=(220-edad)/10;
				cout<<"su numero de pulsaciones debe ser "<<numP<<" por cada 10 segundos de ejercicio"<<endl;
				break;
			default:
				cout<<"Ingrese un caracter valido"<<endl;
		}
		return 0;
				
		}
		