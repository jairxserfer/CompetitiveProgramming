#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>m;
	vector<int>n;
	int a = 0;
	for(int i = 0 ; i < 100; i++){
		cin>>a;
		m.push_back(a);
		n.push_back(a);
	}
	sort(m.begin(),m.end());
	reverse(m.begin(),m.end());
	cout<<m[0]<<endl;
	for(int i = 0; i < 100; i++){
		if(n[i]==m[0]){
			cout<<i+1<<endl;
		}
	}
	return 0;
}
