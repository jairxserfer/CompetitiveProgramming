#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a;
		cin>>b;
		for(int i=0;i<b;i++){
			int cont=1;
			for(int j=1;j<=a;j++){
				if(cont<a) cont++;
				for(int k=1;k<=cont;k++){
				cout<<" "<<j<<" ";
				}
			cout<<"\n";
			}
		cout<<"\n";
		}
	cout<<"\n";
	}
}

