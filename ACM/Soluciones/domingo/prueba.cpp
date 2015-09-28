#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int size=0;
	while(a!=0){
		a=a/10;
		size++;
	}cout<<size<<endl;

}