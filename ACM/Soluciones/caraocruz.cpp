#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		vector<int>caraocruz;
		int a;
		for(int i=0;i<n;i++){
			cin>>a;
			caraocruz.push_back(a);
		}
		int cara=0;
		int cruz=0;
		for(int i=0;i<caraocruz.size();i++){
			if(caraocruz[i]==0)cara++;
			if(caraocruz[i]==1)cruz++;
		}
		cout<<"Mary won "<<cara<<" times and John won "<<cruz<<" times\n";
	}
	return 0;
}