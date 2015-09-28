#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;


int main(){
	int n,m;
	while(cin>>n>>m){
		int cont=0;
		for(int i=n; i <= m; i++){
			vector<int>partes;
			int c=i;
			while(c!=0){
				int a;
				a=c%10;
				c=c/10;
				partes.push_back(a);
			}

			sort(partes.begin(), partes.end());
			int buffer=0;
			
			int size=partes.size();
			for(int j = 0; j < size ; j++){
				if(partes[j]==partes[j+1]) break;
				buffer++;
			}
			if( buffer == size ) cont++;
			
		}
		cout<<cont<<"\n";
	
	}

	return 0;

}
