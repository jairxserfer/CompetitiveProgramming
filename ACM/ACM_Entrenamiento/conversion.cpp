#include <iostream>
#include <vector>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Ingrese el número:\n";
	cin>>a;
	cout<<"Ingrese la base:\n";
	cin>>b;
	vector<int>d;
	while(a%b!=0){
		int m;
		a%b==m;
		d.push_back(m);
		a=a/b;

	}
	for(int i=d.size()-1;i>=0;i--){
		cout<<d[i];
	}

}