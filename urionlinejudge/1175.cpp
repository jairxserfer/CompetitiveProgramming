#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int>mv;
	for(int i = 0; i < 20; i++){
		int n;
		cin>>n;
		mv.push_back(n);
	}
	reverse(mv.begin(), mv.end());
	for(int i = 0; i < 20; i++){
		cout<<"N["<<i<<"] = "<<mv[i]<<endl;
			}
	return 0;
}
