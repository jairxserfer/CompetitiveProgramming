#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<string> v;
	for(int i=0;i<3;i++){
		string a;
		cin>>a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	cout<<"\n";
	for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
	return 0;
}