
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
char a;
while(scanf("%c",&a) != EOF){
/*if(a=='\n')cout<<endl;
int b;
b=a;
b=b-7;
a=b;
cout<<a;*/
if(a!='\n')printf("%c",a-7);
		else printf("\n");
}
return 0;
}
