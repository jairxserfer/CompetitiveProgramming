#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float a,b,c;
	cin>>a>>b>>c;
	a=a*2;
	b=b*3;
	c=c*5;
	cout<<fixed;
	cout<<"MEDIA = "<<setprecision(1)<<(a+b+c)/10<<endl;
	return 0;
}
