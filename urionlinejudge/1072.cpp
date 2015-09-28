#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int cont1=0;
	int cont2=0;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		if(a>=10 and a<=20){
			cont1++;
		} else cont2++;
	}
	cout<<cont1<<" "<<"in\n";
	cout<<cont2<<" "<<"out\n";
	return 0;
}
