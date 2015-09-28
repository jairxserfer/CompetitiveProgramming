#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int matriz[n][n];	
	
	matriz[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				matriz[i][j]=1;
			}else
			matriz[i][j]=0;
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			matriz[i][j]=matriz[i-1][j-1]+matriz[i-1][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(matriz[i][j]!=0){
				cout<<" ";
				cout<<matriz[i][j]<<" ";
			}
		}
		cout<<endl;
	}

}