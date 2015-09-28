#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b,cont=1;
	cin>>a>>b;
	
	while(cont<b){
		int conta=0;
		for(int j=0; j<a;j++){
			cout<<cont;
			if(conta<a-1){
				cout<<" ";	
			}
			
			if(cont==b) break;
			cont++;
			conta++;
		}
		cout<<endl;
	}
		
	
	return 0;
}
