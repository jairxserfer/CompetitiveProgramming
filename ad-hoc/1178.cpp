#include <bits/stdc++.h>

using namespace std;

int main(){
	double n;
	cin>>n;
	for(int i = 0; i < 100; i++){
		cout<<fixed;
		cout<<"N["<<i<<"] = "<<setprecision(4)<< n <<endl;
		n = n/ 2.0;
	}
	return 0;
}