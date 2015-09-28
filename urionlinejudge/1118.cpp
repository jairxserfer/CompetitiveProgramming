#include <bits/stdc++.h>

using namespace std;

void program(){
	int cont=0,op;
	double a, acum=0;
	while(cin>>a){
		if(a>=0.0 and a<=10.0){
			acum=acum+a;
			cont++;
		} else{
			cout<<"nota invalida\n";
		}
		if(cont==2) break;
	}
	cout<<fixed;
	cout<<"media = "<<setprecision(2)<<acum/2.0<<endl;
}

int main(){
	int op=1;
	do{
		if(op==1){
			program();	
		}
		cout<<"novo calculo (1-sim 2-nao)\n";
		cin>>op;
	}while(op!=2);
		
	
	return 0;
}
