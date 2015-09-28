#include <iostream>
#include <vector>
#include <algorithm>

//TERMINADO
using namespace std;

int main(){
	int t;
	while (cin>>t){
		int buffer=0;
		while(t--){
			int number;
			cin>>number;
			if(number>buffer){
			buffer=number;
			}
		}cout<<buffer<<endl;	
	}
	return 0;
}
