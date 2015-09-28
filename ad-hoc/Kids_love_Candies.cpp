#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n , k;
		cin>>n>>k;
		int candies[n];
		for(int i = 1; i <= n; i++){
			cin>>candies[i];
		}
		int sum = 0;
		for(int i = 1; i <= n; i++){
			sum+= (candies[i]/k);
		}
		cout<<sum<<endl;
	}
	return 0;
}