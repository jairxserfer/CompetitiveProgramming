#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a, b,c;
	double d,e,f;
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	cout<<fixed;
	cout<<"VALOR A PAGAR: R$ "<<setprecision(2)<<(b*c)+(e*f)<<endl;
	
	return 0;
}
