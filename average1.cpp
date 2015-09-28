#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
	float a,b;
	cin>>a>>b;
	a=a*3.5;
	b=b*7.5;
	cout<<fixed;
	cout<<"MEDIA = "<<setprecision(5)<<(a+b)/11<<endl;
	
	return 0;
}
