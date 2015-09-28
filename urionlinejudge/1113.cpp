#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	while(cin>>a>>b){
		if(a==b) break;
		if(a>b) cout<<"Decrescente\n";
		if(b>a) cout<<"Crescente\n";
	}	
	return 0;
}

