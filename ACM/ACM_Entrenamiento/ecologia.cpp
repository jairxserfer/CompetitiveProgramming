#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int f,ar[n];
int a,b,c,s=0;
for(int i=0;i<n;i++)
{
cin>>f;
s=0;
for(int j=1;j<=f;j++)
{
cin>>a>>b>>c;
s=s+a*c;
}
ar[i]=s;
}

for(int i=0;i<n;i++)
{
cout<<ar[i]<<"\n";
}
	
}