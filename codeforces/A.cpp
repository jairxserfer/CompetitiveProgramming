#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int a1,a2;
    int b1,b2;
    int c1,c2;
    while(cin>>n)
    {
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;
        int max1=0,max2=0,max3=0;
        for(int i=a1;i<=a2;++i)
        {
            for(int j=b1;j<=b2;++j)
            {
              for(int k=c1;k<=c2;++k)
              {
                  max1=max(max1,i);
                  max2=max(max2,j);
                  max3=max(max3,k);
                  if(max1+max2+max3==n)
                  {
                      cout<<max1<<" "<<max2<<" "<<max3<<endl;
                      return 0;
                  }
              }
            }
        }
    }
    return 0;
}
