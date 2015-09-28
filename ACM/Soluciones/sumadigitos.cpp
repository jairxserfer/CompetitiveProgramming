
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
 long int t;
while(cin>>t){
if(t<0) break;
if(t>0){
int num[900];
int cont=0;
int sum=0;

for(int i=0;i<32 and t>0;i++){
int c=0;
c=t%10;
num[cont]=c;
t=t/10;
cont++;
}

for(int i=cont-1;i>=0;i--){
sum=num[i]+sum;
if(i!=0)cout<<num[i]<<" + ";
else cout<<num[i]<<" = ";
}cout<<sum<<endl;


}else 
	cout<<"0 = 0\n";
}
return 0;
}
