#include <bits/stdc++.h>
using namespace std;
int main(){
	double cont1 = 0, cont2 = 0, cont3 = 0;
	int t;
	cin>>t;
	while(t--){
		int a; char b;
		cin>>a>>b;
		if(b=='C') cont1=cont1+a;
		if(b=='R') cont2=cont2+a;
		if(b== 'S') cont3=cont3+a;
		
	}
	double total;
	total=cont1+cont2+cont3;
	cout<<"Total: "<<total<<" cobaias\n";
	cout<<"Total de coelhos: "<<cont1<<endl;
	cout<<"Total de ratos: "<<cont2<<endl;
	cout<<"Total de sapos: "<<cont3<<endl;
	cout<<fixed;
	double porcenta,porcentb,porcentc;
	porcenta=(cont1/total)*100;
	porcentb=(cont2/total)*100;
	porcentc=(cont3/total)*100;
	cout<<"Percentual de coelhos: "<<setprecision(2)<<porcenta<<" %"<<endl;
	cout<<"Percentual de ratos: "<<setprecision(2)<<porcentb<<" %"<<endl;
	cout<<"Percentual de sapos: "<<setprecision(2)<<porcentc<<" %"<<endl;	
	return 0;
}
