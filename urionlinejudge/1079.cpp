#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		double n1, n2, n3;
		double prom = 0;
		cin>>n1>>n2>>n3;
		prom= ((n1*2)+(n2*3)+(n3*5))/10.0;
		cout<<fixed;
		cout<<setprecision(1)<<prom<<endl;
	}
	return 0;
}
