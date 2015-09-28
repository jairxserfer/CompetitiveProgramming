#include <bits/stdc++.h>

using namespace std;

int  main(){
	int a,n, buffer=0, cont=0;
	cin>>a;
	do{
		cin>>n;
	}while(n<=0);
	vector<int>mv;
	for(int i = 0; i < n; i++){
		mv.push_back(i+a);
	}
	for(int i = 0; i < mv.size(); i++){
		cont= mv[i]+cont;
	}
	cout<<cont<<endl;
	return 0;
}
