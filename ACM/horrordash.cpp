#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	int cont=1;
	while(t--){
		int n;
		cin>>n;
		vector<int>mv;
		int a;
		for(int i = 0; i < n; i++){
			cin>>a;
			mv.push_back(a);	
		}
		sort(mv.begin(), mv.end());
		cout<<"Case "<<cont<<": "<<mv[n-1]<<endl;
		cont++;
	}
	return 0;
}
