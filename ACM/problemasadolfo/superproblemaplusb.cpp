#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int size, plus;
	vector<int>array;
	
	do{
		cin>>size;
	int buffer=0,i=0;
	for(int i=0;i<size;i++){
		int a;
		cin>>a;
		array.push_back(a);
	} 
	 cin>>plus;
	 sort(array.begin(),array.end());
	 
	 do{
	 	buffer=buffer+array[i];
	 	i++;
	 	if(buffer==plus){
	 		cout<<"YES"<<endl;
	 		i=i+2;
	 		break;
	 		}
	 	
	 }while(buffer!=plus and i<size);
	 plus=0;	
	if(i==size) cout<<"NO"<<endl;
	}while(size!=0);
	
}