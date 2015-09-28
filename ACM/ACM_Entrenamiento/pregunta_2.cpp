#include <iostream>

using namespace std;

int main(){
	int pagoHora,horaTrabajo,horasExtra,totalPagar;
	cout<<"Ingrese la cantidad de dinero por hora:\t";
	cin>>pagoHora;
	cout<<"Ingrese las horas trabajadas:\t";
	cin>>horaTrabajo;
	if(horaTrabajo>40){
		horasExtra=horaTrabajo-40;
		if((horasExtra)<8){
			totalPagar=(horaTrabajo-horasExtra)*pagoHora+horasExtra*2;
		}else{
			totalPagar=(horaTrabajo-horasExtra)*pagoHora+8*2+(horasExtra-8)*3;
		}
	}else totalPagar=horaTrabajo*pagoHora;
	cout<<"El total a pagar es:\t"<<totalPagar<<"\n";
	//system("Pause");
	return(0);
}