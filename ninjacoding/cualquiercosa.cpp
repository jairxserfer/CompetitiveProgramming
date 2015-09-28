#include <stdio.h>
#include <string.h>
 
using namespace std;
 
int t,n;
char x[100];
 
int main(){
    while(scanf("%d",&t)!=EOF){
        while(t--){
            scanf("%s",x);
            n = strlen(x);
            if(strcmp(x,"1")==0 || strcmp(x,"4")==0 || strcmp(x,"78")==0)
                printf("+\n");
            else if(x[n-2] =='3' && x[n-1]=='5')
                printf("-\n");
            else if(x[0]=='9' && x[n-1]=='4')
                printf("*\n");
            else if(x[0]=='1' && x[1]=='9' && x[2]=='0')
                printf("?\n");
            else
                printf("+\n");
        }
    }
}
