#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
	long long int a;
	cin>>a;
   	long long int horas, minutos, segundos;
	segundos=a%60;
	a=a/60;
	minutos=a%60;
	a=a/60;
	horas=a%60;
	if(horas<10)cout<<"0"<<horas<<":";
		else cout<<horas<<":";
	if(minutos<10)cout<<"0"<<minutos<<":";
		else cout<<minutos<<":";
	if(segundos<10)cout<<"0"<<segundos<<"\n";
		else cout<<segundos<<"\n";

 }
return 0;
}
