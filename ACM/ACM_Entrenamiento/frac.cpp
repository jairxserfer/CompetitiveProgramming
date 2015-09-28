#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

#define PI 4*atan(1)

using namespace std;

//Prototipes
void cinArray(int array[], int size);
void coutArray(int array[], int size);


//Principal Program
int main(){
int n;
cin>>n;
while(n--){
//number of fractions
int m;
//fraccions input
int a[m];
cin>>m;
cinArray(a,m);
coutArray(a,m);


}

}


//Subprograms
void cinArray(int array[], int size){
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
}

void coutArray(int array[], int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<"\t";
	}
}