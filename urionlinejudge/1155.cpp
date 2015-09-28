#include <bits/stdc++.h>

using namespace std;

int main(){
	double cont= 0, buffer, val;
	for(int i = 1; i<=100; i++){
		val=i;
		buffer=1/val;
		cont=cont+buffer;
	}
	cout<<fixed;
	cout<<setprecision(2)<<cont<<endl;
	return 0;
}
