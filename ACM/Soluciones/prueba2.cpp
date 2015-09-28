#include <iostream>
using namespace std;
int main(){
long long int a,b;
int cont=0;

while(cin>>a>>b){
	if(a<b){
		for(int i=a;i<=b;i++){
		int m;
		m=i;
		int cont1=0;
			while(m!=0){
			cont1=(m%2)+cont1;
			m=m/2;
			}cont=cont1+cont;}
		cout<<cont<<endl;}

		if(b<a){
			for(int i=b;i<=a;i++){
			int m;
			m=i;
			int cont1=0;
				while(m!=0){
				cont1=(m%2)+cont1;
				m=m/2;
			}cont=cont1+cont;}
		cout<<cont<<endl;}
} 


}
