#include <iostream>
#include <cmath>

using namespace std;
int main(){
	long long int hashmat,adversary,buffer;
	while(cin>>hashmat>>adversary){
		buffer=abs(hashmat-adversary);
		cout<<buffer<<"\n";}
	return 0;
}