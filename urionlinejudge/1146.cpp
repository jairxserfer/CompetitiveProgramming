#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		int cont=1;
		for(int i=1; i<=n;i++){
			cout<<i;
			
			if(cont<n){
				cout<<" ";
			}
			cont++;
		}
		cout<<endl;
	}
	return 0;
}
