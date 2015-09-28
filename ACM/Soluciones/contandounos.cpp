#include <iostream>
using namespace std;

/*int contaruno(long long int a, long long int b){
	int n=0;

	if(a<b){
		for(int i=a; i<=b;i++){
			int c;
			for (c = 0; i; c++) 
				i &= i - 1;
			cout<<c<<endl;
			n=n+c;
		}
	} else{
		for(int i=b; i<=a;i++){
		int c;
		for (c = 0; i; c++) 
			i &= i - 1;
		cout<<c<<endl;
		n=n+c;
	}
	}
	return n;
}*/

int contaruno(long long int a, long long int b){
int cont=0;
if(a<b){
		for(int i=a;i<=b;i++){
		int m;
		m=i;
		int cont1=0;
			while(m!=0){
			cont1=(m%2)+cont1;
			m=m/2;
			}cont=cont1+cont;}
		}

		if(b<a){
			for(int i=b;i<=a;i++){
			int m;
			m=i;
			int cont1=0;
				while(m!=0){
				cont1=(m%2)+cont1;
				m=m/2;
			}cont=cont1+cont;}
		}
return cont;
}



int main(){
long long int a,b,res;
while(cin>>a>>b){
res=contaruno(a,b);
cout<<res<<endl;}
return 0;
}
