#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, buffer,sum=0;
	cin>>a>>b;
	if(a>b){
		buffer=a;
		a=b;
		b=buffer;
	}
	
	for(int i=a; i<=b; i++){
		if((i%13)!=0){
			sum=sum+i;
			
		}
	}
	cout<<sum<<endl;
	return 0;
}
