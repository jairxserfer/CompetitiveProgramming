#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

int n,m,k;
while(cin>>n>>m){
cin>>k;
vector<int> vec;
vector<int> vec2;
int b;
for(int i=0;i<k;i++){
	int a;
	cin>>a;
	if(a>m){
		a=0;
	}
	
	vec.push_back(a);
	
	
}
sort(vec.begin(), vec.end());
for(int i=0;i<k;i++){
	int a;
	a=vec[i];
	vec2.push_back(a);
}

reverse(vec2.begin(), vec2.end());

int c=0;

if((k%2)==1){
	k=k+1;
}

k=k/2;
int i=0;
do{
	c=c+(vec[i]+vec2[i]);
	i++;
}while(c<m and i>k);
/*for(int i=0;i<k;i++){
	if(c<m){
		c=c+(vec[i]+vec2[i]);
	}
}*/
cout<<c<<endl; }
}

