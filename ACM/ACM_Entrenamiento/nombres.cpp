#include <iostream>
using namespace std;
int main(){
	char no1[4];
	char no2[4];
	char no3[4];
	char no4[4];
	char no5[4];
	int size=4;
	for(int i=0;i<size;i++){
		cin>>no1[i];
	}
	for(int i=0;i<size;i++){
		cin>>no2[i];
	}
	for(int i=0;i<size;i++){
		cin>>no3[i];
	}
	for(int i=0;i<size;i++){
		cin>>no4[i];
	}
	for(int i=0;i<size;i++){
		cin>>no5[i];
	}
	cout<<"Los posibles nombres son:\t\n";
	for(int i=0;i<size;i++){
		cout<<no1[i]<<no2[i]<<no3[i]<<no4[i]<<no5[i]<<"\n";
	}

	for(int i=0;i<size;i++){
		cout<<no2[i]<<no1[i]<<no3[i]<<no5[i]<<no4[i]<<"\n";
	}
	for(int i=0;i<size;i++){
		cout<<no4[i]<<no2[i]<<no5[i]<<no3[i]<<no4[i]<<"\n";
	}
	for(int i=0;i<size;i++){
		cout<<no5[i]<<no1[i]<<no2[i]<<no4[i]<<no3[i]<<"\n";
	}
	for(int i=0;i<size;i++){
		cout<<no4[i]<<no1[i]<<no5[i]<<no3[i]<<no2[i]<<"\n";
	}
	for(int i=0;i<size;i++){
		cout<<no1[i]<<no4[i]<<no3[i]<<no5[i]<<no2[i]<<"\n";
	}
}