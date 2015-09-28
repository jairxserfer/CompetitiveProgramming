#include <iostream>
using namespace std;
int main(){
	char letter;
	int number;
	for(int i=0;i<255;i++){
		number=i;
		letter=number;
		cout<<number<<"\t"<<letter<<"\n";
	}
}