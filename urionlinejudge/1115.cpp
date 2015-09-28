#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	while(cin>>a>>b){
		if(a==0 or b==0) break;
		if(a>0 and b>0) cout<<"primeiro\n";
		if(a>0 and b<0) cout<<"quarto\n";
		if(a<0 and b>0) cout<<"segundo\n";
		if(a<0 and b<0) cout<<"terceiro\n";
	}
	return 0;
}
