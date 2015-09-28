#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int alcool=0, gasolina=0, diesel=0;
	while(cin>>n){
		if(n==4) break;
		if(n==1) alcool++;
		if(n==2) gasolina++;
		if(n==3) diesel++;
	}
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<alcool<<endl;
	cout<<"Gasolina: "<<gasolina<<endl;
	cout<<"Diesel: "<<diesel<<endl;
	return 0;
}
