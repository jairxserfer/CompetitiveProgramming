#include <bits/stdc++.h>

using namespace std;

int main(){
	 int t;
	 cin>>t;
	 while(t--){
	 	int a, cont=0;
	 	cin>>a;
	 	for(int i = 1; i < a; i++){
	 		if(a%i==0){
	 			cont++;
	 		}
	 	}
	 	if(cont!=1) cout<<a<<" nao eh primo\n";
	 	else cout<<a<<" eh primo\n";
	 }
	return 0;
}
