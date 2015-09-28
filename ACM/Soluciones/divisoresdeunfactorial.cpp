#include <iostream>

using namespace std;

int factorial(int n){
	if(n==1 or n<1)return n;
	else return(n*factorial(n-1));
}


int main(){
	long long int a,b;
	while(cin>>b>>a){
		int facto;
		facto=factorial(a);
		if((facto%b)==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}	

	return 0;
}