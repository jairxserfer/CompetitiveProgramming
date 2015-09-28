#include <bits/stdc++.h>
using namespace std;
int main(){
	double I=0, a=1, b=2, c=3;
	while(I<2){
		cout<<"I="<<I<<" J="<<a+I<<endl;
		cout<<"I="<<I<<" J="<<b+I<<endl;
		cout<<"I="<<I<<" J="<<c+I<<endl;
		I=I+0.2;
	}
	return 0;
}
