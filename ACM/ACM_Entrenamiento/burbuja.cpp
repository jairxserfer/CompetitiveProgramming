#include <iostream>
using namespace std;
int main(){
	int a[50];
	int size=3;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}

	for(int i=0;i<size-1;i++){
		int c=0;
		if(a[i]>a[i+1]){
			c=a[i];
			a[i]=a[i+1];
			a[i+1]=c;
		}
		if(a[i]>a[i+2]){
			c=a[i];
			a[i]=a[i+2];
			a[i+2]=c;
		}
		}

	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";

	}
	return 0;
}