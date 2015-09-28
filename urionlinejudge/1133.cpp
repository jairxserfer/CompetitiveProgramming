#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b,buffer;
	cin>>a>>b;
	if(a>b){
		buffer=a;
		a=b;
		b=buffer;
	}
	for(int i=a+1; i < b; i++){
		if(i%5==2 or i%5==3){
			cout<<i<<endl;
		}
	}
	return 0;
}
