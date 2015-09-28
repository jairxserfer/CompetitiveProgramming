#include <bits/stdc++.h>

using namespace std;

int main(){ 
	vector<double>mv;
	for(int i = 0; i < 100; i++){
		double a;
		cin>>a;
		mv.push_back(a);
	}
	for(int i = 0; i < mv.size(); i++){
		if(mv[i]<= 10){
			cout<<"A["<<i<<"] = ";cout<<fixed;
			cout<<setprecision(1)<<mv[i]<<endl;
		}
	}
	return 0;
}
