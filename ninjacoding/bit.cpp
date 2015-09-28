#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	long long a=0;
	while(t--){
		string m;
		cin>>m;
		if(m=="X++") a++;
		if(m=="++X") a++;
		if(m=="X--")a--;
		if(m=="--X")a--;
	}
	cout<<a<<endl;
	return 0;
}
