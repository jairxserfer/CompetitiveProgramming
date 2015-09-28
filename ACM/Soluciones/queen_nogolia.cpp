#include <iostream>
using namespace std;
void ContNumber(int a, int b){
	int cont=0;
	for(int i=a;i<=b;i++){
		if((i%11)!=0 and (i%100)!=0 and (i%101)!=0){
			int b;
			b=i;
			b=b/10;
			if((b%11)!=0 and (b%100)!=0 and (b%101)!=0)cont++;
			int k=(i%100); if((k%11)==0)cont--;
			k=k/2;
			if((k%10)==0 and (i%10)==0)cont--;
		}  
	}cout<<cont<<endl;
}

int main(){
	int a, b;
	while(cin>>a>>b){
	ContNumber(a,b);}
	return 0;
}