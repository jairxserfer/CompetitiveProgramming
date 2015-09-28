#include <iostream>
#include <iomanip>
#include <math.h>
#define PI 3.14159

using namespace std;

int main(){
	double a;
	cin>>a;
	a=pow(a,3);
	cout<<fixed;
	cout<<"VOLUME = "<<setprecision(3)<<(4/3.0)*PI*a<<endl;
	
	return 0;
}
