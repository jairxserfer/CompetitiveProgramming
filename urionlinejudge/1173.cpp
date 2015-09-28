#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int x[10];
	cin>>n;
	for(int i = 0; i < 10; i++){
		x[i]=n;
		n=n*2;
	}
	for(int i = 0; i < 10; i++){
		cout<<"N["<<i<<"] = "<<x[i]<<endl;
	}
	return 0;
}
