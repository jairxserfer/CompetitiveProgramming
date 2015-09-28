#include<bits/stdc++.h>

using namespace std;

int main(){
	int x[10];
	for(int i = 0; i <10; i++){
		int a;
		cin>>a;
		if(a<=0){
			x[i]=1;
		} else{
			x[i]=a;
		}
	}
	for(int i = 0; i <10; i++){
		cout<<"X["<<i<<"] = "<<x[i]<<endl;
	}
	return 0;
}
