#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int t,cont=1;
	cin>>t;
	long long int m,n;
	while(t--){
		m=pow(cont,2); n=pow(cont,3);
		cout<<pow(cont,1)<<" "<<m<<" "<<n<<endl;
		cout<<pow(cont,1)<<" "<<m+1<<" "<<n+1<<endl;
		cont++;
	}
	
	return 0;
}
