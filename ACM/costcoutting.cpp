#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	int cont=1;
	while(t--){
		int a;
		vector<int> mv;	
		for(int i=0; i < 3; i++){
			cin>>a;
			mv.push_back(a);
		}
		sort(mv.begin(), mv.end());
		cout<<"Case "<<cont<<": "<<mv[1]<<"\n";
		cont++;
	}
	return 0;
	}
