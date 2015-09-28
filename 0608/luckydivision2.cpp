#include <bits/stdc++.h>
#define ll long long
#define PI (arctg(1))/4
#define MAX 50000
#define vecI vector<int>
#define vecC vector<char>

using namespace std;


 bool f(int z)
 {
     while(z)
     {
         if(z % 10 != 4 && z % 10 != 7)
             return false;
         z /= 10;
     }
     return true;
 }
 
 int main()
 {
     int n;
     
     while(cin >> n)
     {
         int flag=0;
         for(int i=2; i<=n; i++)
         {
             if(n % i == 0)
             {
                 if(f(i))
                 {
                     flag=1;
                 }
             }
         }
         if(flag)
             cout << "YES" << endl;
         else
             cout << "NO" << endl;
     }
     
     return 0;
} 