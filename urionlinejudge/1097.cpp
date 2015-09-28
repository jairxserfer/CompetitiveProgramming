#include <bits/stdc++.h>
using namespace std;
int main(){
	int I=1, J=7;
	for(int i = 0 ; i < 5;i++){
		for(int j = 0; j < 3;j++){
			cout<<"I="<<I<<" J="<<J<<endl;
			J--;
		}
		I=I+2;
		J=J+5;
	}
	return 0;
}
