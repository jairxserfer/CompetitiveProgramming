#include <iostream>
using namespace std;

void fibonacci(long long int a[],long long int b){
int inicio=0,buffer=0,posterior=1;
for(int i=0;i<b;i++){
inicio=buffer;
buffer=posterior;
posterior=buffer+inicio;
a[i]=inicio;
}

}
void mostrarVector(long long int a[],long long int b){
for(int i=0;i<b;i++){
	cout<<a[i]<<" ";
}
}

int main(){
long long int arrey[100], b;
while(cin){
cout<<"Ingrese el numero de terminos de la serie:\t";
cin>>b;
if(b==0) break;
fibonacci(arrey,b);
cout<<"Los terminos de la serie fibonacci son:\n";
mostrarVector(arrey,b);
cout<<"\n";	
}
}