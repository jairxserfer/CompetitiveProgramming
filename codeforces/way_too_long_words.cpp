#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	cin>>k;
	while(k--){
		string ms;
		cin>>ms;
		int mk;
		mk = ms.size();
		if(mk<=10) cout<<ms<<endl;
		else{
			cout<<ms[0]<<mk-2<<ms[mk-1]<<endl;
		}
		
		
	}
	
	return 0;
}
