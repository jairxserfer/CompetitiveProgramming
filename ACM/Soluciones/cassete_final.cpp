#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
 int t, n,l=0;
 
 while(cin>>t>>n){
	 vector <int> canciones;
	 for(int i=0;i<n;i++){
 		int a;
 		cin>>a;
  		canciones.push_back(a);
 	}
 
 	for(int i=0;i<n-1;i++){
 	canciones[i]=canciones[i]+1;
 	}
 
 	int c=0;
	for(int i=0;i<n;i++){
 		c=c+canciones[i];
 	}
 	if(c<=t){
 		cout<<n<<endl;
	} 
 	if(c>t){
 		int k=0;
 		l=0;
 		sort(canciones.begin(),canciones.end());
		 for(int f=0;k<=t;f++){
 			k=k+canciones[f];
 			l=f;
 			}
 		cout<<l<<endl;
		}
	}
}
