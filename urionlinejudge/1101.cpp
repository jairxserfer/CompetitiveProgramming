#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	while(cin>>a>>b){
		int buffer= 0, acum=0;
		if(a==0 or b==0) break;
		if(a>b){
			buffer=a;
			a=b;
			b=buffer;
		}
		for(int i = a; i <= b; i++){
			cout<<i<<" ";
			acum=acum+i;
		}
		cout<<"Sum="<<acum<<endl;
		
	}
	return 0;	
}
