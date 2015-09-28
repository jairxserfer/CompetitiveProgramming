#include <iostream>

using namespace std;



int main(){
	long int n;
	while(cin>>n){
		long int m;
		long int k;
		cin>>m>>k;
		if(n==0 and m==0 and k==0) break;
		if(n<=m){
			cout<<"RUINA\n"; 	
		} 
		long int buffer=k;
		long int cont=0;
		while(k>=n and n>m){
			long int resp=k/n;
			long int resp2=resp*m;
			cont=cont+resp2;
			if(resp2>=n){
				k=resp2;
			}else break;
		}
		long int total=cont+buffer;
		long int c=total%n;
		if(n>m){
			cout<<total<<" "<<c<<endl;	
		} 
		}
	return 0;
}