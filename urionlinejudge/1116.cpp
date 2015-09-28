#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		double a, b;
		cin>>a>>b;
		if(b==0){
			cout<<"divisao impossivel\n";
		} else{
			cout<<fixed;
			cout<<setprecision(1)<<a/b<<endl;
		}
	}
	return 0;
}
