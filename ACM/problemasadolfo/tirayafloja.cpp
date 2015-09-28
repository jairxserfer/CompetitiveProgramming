#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
int size;
cin>>size;
vector <int> array;
vector <int> array2;
int media;

for(int i=0;i<size;i++){
	int a;
	cin>>a;
	array.push_back(a);
}
sort(array.begin(), array.end());

for(int i=0;i<size;i++){
	int a;
	a=array[i];
	array2.push_back(a);
	}

reverse(array2.begin(), array2.end());

int size2;
size2=size;

if(size%2==1){
	size=size+1;
}

media=size/2;
int a=0;
int b=0;


for(int i=0;i<media;i=i+2){
 	a=a+array[i]+array2[i];
}

for(int i=1;i<size-media;i=i+2){
	b=b+array[i]+array2[i];
}
//cout<<a<<" "<<b<<endl;
if(a==b){cout<<a<<" "<<b<<endl;}
else{
	a=0;
	b=0;
	for(int i=0;i<media;i++){
		a=a+array[i];
	}
	for(int i=0;i<size2-media;i++){
		b=b+array2[i];
	}
	cout<<a<<" "<<b<<endl;
}
}
