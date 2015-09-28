#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x=0;
		int i=1;
		while(n--){
		long int k;
		cin>>k;
		if(k==0)break;
		int m;
		m=2*pow(k,i);	
		i++;
		x=m+x;
		}cout<<x<<endl;
		 
	}

	return 0;
}