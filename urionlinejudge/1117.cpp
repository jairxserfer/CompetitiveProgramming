#include <bits/stdc++.h>

using namespace std;

int main(){
	int cont=0;
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
	return 0;
}
