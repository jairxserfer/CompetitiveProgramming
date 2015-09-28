#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int b;
	for(int i = 1; i<=n; i++){
		if(i%2==0){
			b=pow(i,2);
			cout<<i<<"^2"<<" = "<<b<<"\n";
		}
	}
	return 0;
}
