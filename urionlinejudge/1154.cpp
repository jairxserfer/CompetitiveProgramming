#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int>mv;
	int a;
	while(cin>>a){
		if(a<0) break;
		mv.push_back(a);
	}
	double sum, prom,cont;
	cont=mv.size();
	for(int i = 0; i < cont; i++){
		sum=sum+mv[i];
	}
	prom=sum/cont;
	cout<<fixed;
	cout<<setprecision(2)<<prom<<endl;
	return 0;
}
