#include <iostream>

using namespace std;

int main(){

	long int ncab,numpatas;
	while(cin>>ncab>>numpatas){
		if(ncab==-5 and numpatas==-5) break;
		else{
			long int cv,cp;
			cv=(numpatas/2)-ncab;
			cp=ncab-cv;
			if(cp>=0 and cv>=0 and (numpatas%2)==0){
				cout<<cp<<" "<<cv<<endl;	
			} else {
				cout<<"-1"<<endl;
			}
			
			}
	}
	return 0;
}