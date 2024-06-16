#include <iostream>
using namespace std;
int main()
{
	double numLl,precioU,totalP;
	cout<<"En una llantera se ha establecido una promocion de las llantas marca Ponchadas, dicha promocion consiste en lo siguiente:\nSi se compran menos de cinco llantas el precio es de $300 cada una,\nde $250 si se  compran de cinco a 10 y de $200 si se compran mas de 10."<<endl;
	cout<<"Programa para obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra."<<endl;
	cout<<"*Ingrese la cantidad de llantas que comprara:"<<endl;
	cin>>numLl;
	while (numLl<0) {
		cout<<"Porfavor ingrese una cantidad valida"<<endl;
		cin>>numLl;
	}
	if (numLl<5) {
		precioU=300;
	} else if (numLl<=10) {
		precioU=250;		
	} else {
		precioU=200;
	}
	totalP=precioU*numLl;
	cout<<"Por cada llanta debe pagar s/"<<precioU<<" y en total s/"<<totalP<<endl;
	return 0;
}
