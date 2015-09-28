#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n, x, y;
		cin>>n>>x>>y;
		int array[n];
		for(int i = 0; i < n; i++){
			cin>>array[i];
		}
		if(array[0]!= x and array[n-1]!= y) cout<<"OKAY"<<endl;
			else{
				if(array[0]== x and array[n-1]==y) cout<<"BOTH"<<endl;
					else{
						if(array[0] == x) cout<<"EASY"<<endl;
						if(array[n-1] == y) cout<<"HARD"<<endl;
					}
			}
	}	
	return 0;
}