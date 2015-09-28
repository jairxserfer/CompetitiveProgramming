#include <iostream>
#include <string>

using namespace std;

int main(){
	string  number1, number2;
	while(cin>>number1>>number2){
		if(number1=="0" and number2=="0") break;
				int cont=0;
		if(number1>=number2){
			for(int i=0; i< number1.size(); i++){
				int c=0;
				int buffer1;
				int buffer2;
				buffer1=number1[i];
				buffer1=buffer1-48;
				buffer2=number2[i];
				buffer2=buffer2-48;
				int d=0;
				c=buffer1+buffer2;
				c=c+d;
				c=c/10;
				if((c)>=1){
					d=c;
					cont++;
				}
				}
		}else{
			for(int i=0; i<number2.size();i++){
				int c=0;
				int buffer1;
				int buffer2;
				buffer1=number1[i];
				buffer1=buffer1-48;
				buffer2=number2[i];
				buffer2=buffer2-48;
				int d=0;
				c=buffer1+buffer2;
				c=c+d;
				c=c/10;
				if((c)>=1){
					d=c;
					cont++;
				}
			}
		}
		cout<<cont<<endl;
	}
	return 0;
}