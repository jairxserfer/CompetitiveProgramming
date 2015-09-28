#include <iostream>
#include <string.h>
using namespace std;

void cinMatriz(int a[][15], int sizeCo, int sizeFile){
	 for(int i=0;i<sizeCo;i++){
	 	for(int j=0;j<sizeFile;j++){
	 		cin>>a[i][j];
	 	}
	 }
}

void coutMatriz(int a[][15],int sizeCo, int sizeFile){
	 for(int i=0;i<sizeCo;i++){
	 	for(int j=0;j<sizeFile;j++){
	 		cout<<a[i][j]<<" ";
	 	}
	 	cout<<"\n";
	 }
}

int main(){
	int a[20][15];
	int sizeCo=5,sizeFile=3;
	cinMatriz(a,sizeCo,sizeFile);
	coutMatriz(a,sizeCo,sizeFile);
}