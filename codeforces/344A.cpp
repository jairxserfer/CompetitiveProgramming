#include <bits/stdc++.h>
#define ll long long


using namespace std;

int main(){
  ll tam;
  cin>>tam;
  vector <ll> mv;
  for (size_t i = 0; i < tam; i++) {
    ll n;
    cin >> n;
    mv.push_back(n);
  }
  ll buffer = 0;
  ll cont = 0;
  for( int i = 0; i < mv.size(); i++ )
  {
    if(mv[0] == 0) cont++;
    if(buffer != mv[i])
    {
      buffer = mv[i];
      cont++;
    }
  }
  cout << cont << endl;
  return 0;
}
