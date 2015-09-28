#include <iostream>
using namespace std;
int main(){
	int voto,c1=0,c2=0,c3=0,c4=0;
	cout<<"Ingrese los votos:\n";
	do{
		cin>>voto;
		if(voto==1){
			c1++;
		}
		if(voto==2){
			c2++;
		}
		if(voto==3){
			c3++;
		}
		if(voto==4){
			c4++;
		}
		if(voto==0){
			break;
		}
	}while(voto>-1 and voto<5);
	cout<<"La cantidad de votos del candidato 1:"<<c1;
	cout<<"\n"<<"La cantidad de votos del candidato 2:"<<c2;
	cout<<"\n"<<"La cantidad de votos del candidato 3:"<<c3;
	cout<<"\n"<<"La cantidad de votos del candidato 4:"<<c4<<"\n";
	system("Pause");
	return(0);
}