#include <iostream>
using namespace std;

int main(){
 	long int n;
 	long int a;
 	int array[10];
 	int criba[100000];
 	
 	for(int i = 0; i < 100000; i++)
 		criba[i] = 0;

 	for(int i=2;i*i<n;i++){
 		if(!criba[i]) {
 			for(int j=i+i;j<n;j=j+i){
 				criba[j]=1;
 			}
 		}
 	}
 		
 		
}