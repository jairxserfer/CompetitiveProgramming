#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//Second Version

int main(){
	int size;
	while(cin>>size){
		if(size!=0){
			vector<long long int>piezas;
			long long int a;
			for(int i=0;i<(size-1);i++){
			cin>>a;
			piezas.push_back(a);
			}
			sort(piezas.begin(), piezas.end());
			for(int i=0;i<size;i++){
				if(piezas[i]!=i+1){
					cout<<i+1<<endl;
					break;
				}
			}
		} else break;
	}
	return 0;
}