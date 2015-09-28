#include <iostream>
using namespace std;
int main(){
	int prom;
	cin>>prom;
	do{
		if(prom>=21) break;
		if(prom>=16) cout<<"BUENO"<<"\n";
		else
			if(prom>=11)cout<<"REGULAR"<<"\n";
			else
				if(prom>=5)cout<<"DEFICIENTE"<<"\n";
				else
					if(prom>=0)cout<<"PESIMO"<<"\n";
	}while(prom<0 && prom>20);
}