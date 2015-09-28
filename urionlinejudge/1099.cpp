#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a=0, b=0, buffer=0, sum=0;
		cin>>a>>b;
		if(a>b){
			buffer=a;
			a=b;
			b=buffer;
		}
		for(int i = a+1; i < b; i++){
			if(i%2 == 1){
				sum=sum+i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
