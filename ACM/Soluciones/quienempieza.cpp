#include <iostream>
using namespace std;

int main(){
	int numberchild;
	while(cin>>numberchild){
		int array[numberchild];
		int numberjumps;
		cin>>numberjumps;
		int cont=0;
		
		for(int i = 0; i < numberchild; i++){
			 
			for(int j = i; j < numberchild; j++){
					array[j]=cont2+1;
					if((array[j]%3)==0) array[j]=0, cont++;		
					if(cont==numberjumps) break;
					cont2++;
			}

		}

		for(int i = 0; i < numberchild; i++)if(array[i]!=0) cout<<array[i]<<endl;
	}
	return 0;
}