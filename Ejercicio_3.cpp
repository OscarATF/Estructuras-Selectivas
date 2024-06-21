#include <iostream>
using namespace std;
int numC;
void cantidad_cam(){
	cout<<"Si se compran tres o mas se aplica un descuento del 20% sobre el total de la compra y si son menos de tres un descuento del 10%"<<endl;
	cout<<"Programa para calcular el total a pagar por la compra de camisas"<<endl;
	cout<<"Ingrese la cantidad de camisas que comprara:"<<endl;
	cin>>numC;
}
int main(){
	double desc,precioC,precioF;
	cantidad_cam();
	while (numC<0)
	{
		cout<<"Porfavor ingrese una cantidad de camisas validas"<<endl;
		cin>>numC;
	}
	cout<<"Ingrese el precio de cada camisa:"<<endl;
	cin>>precioC;
	while (precioC<0)
	{
		cout<<"Porfavor ingrese un precio de camisa valido"<<endl;
		cin>>precioC;
	}
		if (numC>=3) {
			desc=numC*precioC*0.2;
			precioF=numC*precioC-desc;
		} else {
			desc=numC*precioC*0.1;
			precioF=numC*precioC-desc;
		}
	cout<<"El total a pagar es de s/"<<precioF<<endl;
		return 0;
		
}