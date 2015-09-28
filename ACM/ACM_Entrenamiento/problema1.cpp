#include <iostream>

using namespace std;

void llenarVector(int a[], int b);
void mostrarVector(int a[], int b);
void sumaVector(int a[],int b);
void multiplicaVector(int a[],int b);
void factorial(int a[],int b);

int main(){
	int a[100],b,d[100];
	while(cin){
	cin>>b;
	if(b==0) break;
	llenarVector(a,b);
	mostrarVector(a,b);
	cout<<"\n";
	sumaVector(a,b);
	multiplicaVector(a,b);
	factorial(d,b);
}}

void llenarVector(int a[], int b){
	for(int i=0;i<b;i++){
		cin>>a[i];
	}
} 
void mostrarVector(int a[], int b){
	for(int i=0;i<b;i++){
		cout<<a[i]<<" ";
	}
}

void sumaVector(int a[],int b){
	int c=0;
	for(int i=0;i<b;i++){
		c=c+a[i];
	}cout<<c<<"\n";
}
void multiplicaVector(int a[],int b){
	 int c=1;
	 for(int i=0;i<b;i++){
	 	c=c*a[i];
	 }cout<<c<<"\n";
}

void factorial(int a[],int b){
	int d,c=1,buffer=1;
	for(int i=1;i<=(b+4);i++){
		c=b*(i+1);
		b=i*(i-1);
		cout<<c<<"\t";
	}
}