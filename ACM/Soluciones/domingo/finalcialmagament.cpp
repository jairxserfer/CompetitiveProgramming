#include <iostream>
#include <cmath>

using namespace std;

int main(){
int n;
cin>>n;
while(n--){
	double buffer=0;
	double x;
	for(int i=0;i<12;i++){
		cin>>x;
		buffer=x+buffer;
	}
	buffer=buffer/12;
	int c;
	c=buffer;
	int size=0;
	while(c!=0){
		c=c/10;
		size++;
	}

	double r;
	cout<<n+1<<" "<<"$";
	for(int i=1; i<size;i=i*4){
		r=buffer-pow(1000,i);
		cout<<(buffer-r)/pow(1000,i);
		cout<<","<<r;
	}
	cout<<endl;
	
}
return 0;
}