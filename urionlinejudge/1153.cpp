#include <bits/stdc++.h>

using namespace std;

int factorial(int x){
	if(x==0) return 1;
	if(x==1) return 1;
	if(x>1){
		return x*factorial(x-1);
	}
}

int main(){
	int n;
	int result;
	cin>>n;
	result=factorial(n);
	cout<<result<<endl;	
	return 0;
}
