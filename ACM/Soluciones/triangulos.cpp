#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
	int t;
	cin>>t;
	float PI=atan(1)*4;
	while(t--){
		vector<float>mv;
		for(int i=0;i<3;i++){
			float a;
			cin>>a;
			mv.push_back(a);
		}
		sort(mv.begin(), mv.end());
		float a,b,c;
		a=mv[0];
		b=mv[1];
		c=mv[2];
		double tem1,tem2,tem3, temp;
		tem1=(pow(a,2)-(pow(b,2)+pow(c,2)))/(2*(c*b));
		tem1=acos(tem1);
		tem1=(tem1*180)/(2*PI);
		tem2=(pow(b,2)-(pow(a,2)+pow(c,2)))/(2*(c*a));
		tem2=acos(tem2);
		tem2=(tem2*180)/(2*PI);
		tem3=(pow(c,2)-(pow(a,2)+pow(b,2)))/(2*(b*a));
		tem3=acos(tem3);
		tem3=(tem3*180)/(2*PI);
		temp=tem1+tem2+tem3;
		if((temp)!=180){
			cout<<"IMPOSIBLE\n";}
			else{
				if(tem3<90){
					cout<<"ACUTANGULO\n";
				}else {
					if(tem3==90){
						cout<<"RECTANGULO\n";
					}else cout<<"OBTUSANGULO\n";
				}
				
		}
			}
	return 0;
}