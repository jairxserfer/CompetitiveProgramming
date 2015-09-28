#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		if(a!=0){
			if(a<0){
				a=a*(-1);
				if(a%2==0)cout<<"EVEN NEGATIVE\n";
				if(a%2==1)cout<<"ODD NEGATIVE\n";
				a=a*(-1);	
			} 
			if(a%2== 0 and a>0) cout<<"EVEN POSITIVE\n";
			if(a%2== 1 and a>0) cout<<"ODD POSITIVE\n";
		} else{
			cout<<"NULL\n";
		}
		
	}
	return 0;
}
