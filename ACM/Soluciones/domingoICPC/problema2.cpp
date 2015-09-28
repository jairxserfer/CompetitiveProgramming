#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		 int num;
		 cin>>num;
		 vector<int>array;
		 int buffer=0;
		 int cont=0;
		 while(num!=0){
		 	buffer=num%10;
		 	if(buffer!=0){
		 		array.push_back(buffer);	
		 	}
		 	num=num/10;
		 }
		 int x=array.size();
		 if(x==1)cout<<"0";
		 if(x==0)cout<<"1";
		 for(int i=(x-2);i>=0;i--){
		 	cout<<array[i];
		 }
		 cout<<endl;
	}
	return 0;
}