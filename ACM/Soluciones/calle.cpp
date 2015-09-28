#include <iostream>
using namespace std;

int main(){
long long int t;
while(cin>>t){
if(t==0) break;
if(t%2==1)cout<<"IZQUIERDA\n";
else cout<<"DERECHA\n";
}
return 0;

}
