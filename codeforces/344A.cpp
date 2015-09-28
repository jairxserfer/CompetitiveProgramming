#include <bits/stdc++.h>
#define ll long long


using namespace std;

int main(){
  ll t;
  cin >> t;
  ll buffer = -1;
  ll cont;
  while(t--)
  {
    ll k;
    cin >> k;
    if(k != buffer)
    {
      cont++;
      buffer = k;
    }
  }

  cout << cont << endl;
  return 0;
}
