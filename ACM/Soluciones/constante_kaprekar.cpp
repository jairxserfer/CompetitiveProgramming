#include <iostream>
#include <cmath>
using namespace std;

int mayoramenor(int a){
	int array[4];
	int i=0;
	
	while(i<4){
		if(a!=0){
		array[i]=a%10;
		a=a/10;}else array[i]=0;
		i++;
	}
	
	for(int i=1;i<4;i++){
		for(int j=0;j<3;j++){
			if(array[j]<array[j-1]){
				int c;
				c=array[j];
				array[j]=array[j+1];
				array[j+1]=c;
			}
		}
	}

	int x=0;
	int j=3;
	for(int i=0;i<4;i++){
		int m=pow(10,j);
		x=array[i]*m+x;
		j--;
	}
	return x;
}

int menoramayor(int a){
	int array[4];
	int i=0;
	
	while(i<4){
		if(a!=0){
		array[i]=a%10;
		a=a/10;}else array[i]=0;
		i++;
	}
	
	for(int i=1;i<4;i++){
		for(int j=0;j<3;j++){
			if(array[j]>array[j+1]){
				int c;
				c=array[j];
				array[j]=array[j+1];
				array[j+1]=c;
			}
		}
	}

	int x=0;
	int j=3;
	for(int i=0;i<4;i++){
		int m=pow(10,j);
		x=array[i]*m+x;
		j--;
	}
	return x;
}

int main(){
int a;
int x;
int y;
int z;
cin>>a;

x=mayoramenor(a);
y=menoramayor(a);
z=x-y;
a=z;
cout<<a<<endl;
return 0;
}