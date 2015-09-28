#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	string a;
	cin>>a;
	double b,c;
	cin>>b>>c;
	cout<<fixed;
	cout<<"TOTAL = R$ "<<setprecision(2)<<b+((c*15)/100)<<endl;
	
	return 0;
}
