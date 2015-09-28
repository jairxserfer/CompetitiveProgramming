#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

int main(){
	long int n;
	while(cin>>n){
	if(n==0) break;
	long int aleatory;
	aleatory = n;
	vector<long int>mv;
	if(aleatory%10==0){
		cout<<"NO\n";
	} else {
	while(aleatory!=0){
		long int a;
		a=aleatory%10;
		aleatory= aleatory/10;
		mv.push_back(a);
	}
	long int buffer=0;
	long int cont=0;
	for(int i = mv.size()-1; i >=0; i--){
		long int b;
		b=mv[i];
		buffer=buffer+b*pow(10,cont);
		cont++;		
	}
	
	long int number;
	number=buffer+n;
	if(number%2==1) cout<<"SI\n";
		else cout<<"NO\n";	

	}}
	return 0;
}
