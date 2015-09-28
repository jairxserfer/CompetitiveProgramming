#include <bits/stdc++.h>

using namespace std;

int main(){
	double m=-1,div=0, n=0, cont=0;
	for(int i = 0; i < 20; i++){
		m= m+2;
		n = pow(2,i);
		div=m/n;
		cont=cont+div;
	}
	cout<<fixed;
	cout<<setprecision(2)<<cont<<endl;
	return 0;
}
