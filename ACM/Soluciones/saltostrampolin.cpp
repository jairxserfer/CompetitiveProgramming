#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	double x;
	while(cin>>x){
		int prom;
		vector<double> ma;
		ma.push_back(x);
		for(int i=1;i<7;i++){
			double a;
			cin>>a;
			ma.push_back(a);
		}
		sort(ma.begin(), ma.end());
		ma[0]=0;
		ma[1]=0;
		ma[6]=0;
		ma[5]=0;
		double c;
		c=ma[2]+ma[3]+ma[4];
		prom=c*2;
		cout<<prom<<endl;
	}
	return 0;
}
