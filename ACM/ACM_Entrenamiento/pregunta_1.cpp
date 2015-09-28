# include <iostream>
# include <cmath>
# define PI 3.14169
using namespace std;
int main(){
	float a,l1,l2,b;
	float a2,l3,l4,c;
	float a3,l5,l6,d;
	float m;
	int k;
	cout<<"Ingrese el precio del terreno por metro cuadrado:";
	cin>>k;
	cout<<"Ingrese los lados del primer triangulo:\t";
	cin>>l1>>l2;
	cout<<"Ingrese el angulo del primer triangulo:\t";
	cin>>b;
	a=((l1*l2)*sin(b*(PI/180)))/2;
	cout<<"Ingrese los lados del segundo triangulo:\t";
	cin>>l3>>l4;
	cout<<"Ingrese el angulo dl segundo triangulo:\t";
	cin>>c;
	a2=((l3*l4)*sin(c*(PI/180)))/2;
	cout<<"Ingrese los lados del tercer triangulo:\t";
	cin>>l5>>l6;
	cout<<"Ingrese el angulo del tercer triangulo:\t";
	cin>>d;
	a3=((l5*l6)*sin(d*(PI/180)))/2;
	//El area es la suma de los lados
	m=a+a2+a3;
	cout<<"El precio total es:\t"<<m*k<<"\n";
	//system("Pause");
	return(0);
	
}