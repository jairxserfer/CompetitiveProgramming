
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> mv1;
	vector<int> mv2;
	for(int i = 0; i < n; i++){
		int a;
		cin>>a;
		mv1.push_back(a);
		mv2.push_back(a);
	}
	sort(mv2.begin(), mv2.end());
	cout<<"Menor valor: "<<mv2[0]<<endl;
	for(int i = 0; i < mv1.size(); i++){
		if(mv2[0] == mv1[i]){
			cout<<"Posicao: "<<i<<endl;
			break;	
		} 
	}
	return 0;
}