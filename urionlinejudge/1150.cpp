#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, z;
	vector <int> mv;
	cin>>x;
	do{
		cin>>z;
	}while(z<=x);
	for(int i = 0 ; i < z; i++){
		mv.push_back(i+x);
	}
	int sum = 0;
	int i = 0;
	while(sum<=z){
		sum=sum+mv[i];
		i++;
	}
	cout<<i<<endl;
	return 0;
}
