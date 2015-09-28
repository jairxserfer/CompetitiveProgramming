#include <iostream>

using namespace std;

int flavios(int a,int b){
	int possition=b;
	if(b==1 or a==1) return a; 
		else {
			possition=possition+b;
			a=a-1;
		}
	return possition;
}


int main(){
	int num1,num2;
	int t;
	cin>>t;
	while(t--){
		cin>>num1>>num2;
		int m=flavios(num1,num2);
		cout<<m<<endl;	
	}
		
}
