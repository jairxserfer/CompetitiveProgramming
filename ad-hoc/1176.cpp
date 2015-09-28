#include <bits/stdc++.h>

using namespace std;

vector<long long> mv;

void Fibonacci(){
	long long anterior = 0, actual = 1, buffer;
	mv.push_back(anterior);
	for(int i = 0; i < 60; i++){
		mv.push_back(actual);
		buffer = actual;
		actual = actual + anterior;
		anterior = buffer;
	}
}

int main(){
	Fibonacci();
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<"Fib("<<a<<") = "<<mv[a]<<endl;

	}
	return 0;
}