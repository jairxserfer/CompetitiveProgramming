#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a, b ,c;
	cin>>a;
	cin>>b>>c;
	cout<<"NUMBER = "<<a<<endl;
	cout<<fixed;
	cout<<"SALARY = U$ "<<setprecision(2)<<b*c<<endl;
	
	return 0;
}
