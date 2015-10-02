#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--)
  {
    string k;
    cin >> k;
    unsigned long long a = 0;
    for ( int i = 0; i < k.size(); i++ )
    {
      if(k[i] == '0') a = a + 6;
      if(k[i] == '1') a = a + 2;
      if(k[i] == '2') a = a + 5;
      if(k[i] == '3') a = a + 5;
      if(k[i] == '4') a = a + 4;
      if(k[i] == '5') a = a + 5;
      if(k[i] == '6') a = a + 6;
      if(k[i] == '7') a = a + 3;
      if(k[i] == '8') a = a + 7;
      if(k[i] == '9') a = a + 6;
    }
    cout << a << " leds" << endl;
  }
  return 0;
}
