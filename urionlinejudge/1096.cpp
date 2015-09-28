#include <bits/stdc++.h>
using namespace std;
int main(){
	int i = 1, j=7;
	while(i<=9){
		if(j>=5){
			cout<<"I="<<i<<" "<<"J="<<j<<endl;
			j--;
		}else{
			i=i+2;
			j=7;
		}
	}
	return 0;
}
