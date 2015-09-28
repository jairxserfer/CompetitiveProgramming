#include <iostream>
#include <cmath>
using namespace std;
int plusCifras(int n){
int c=0;
while(n!=0){
	c=(n%10)+c;
	n=n/10;
	

}return c;}

int recursiveFuntion(int n){
if(n<10){
	return n;
}
int suma=plusCifras(n);
return suma;
}

int main(){
	long int k,m, number;
	cin>>number;
	k=abs(number);
	m=plusCifras(k);
	cout<<m<<endl;
		//recursiveFuntion(number);
}