#include <bits/stdc++.h>

using namespace std;

int main(){

  long long n;
  cin >> n;
  long long buffer1 = 0;
  long long buffer2 = 0;
  long long result = 0;
  if(n%2 == 0)
  {
    buffer1 = (n/2)*((n/2)+1);
    buffer2 = pow((n/2),2);
  }
  if(n%2 == 1)
  {
    buffer2 = pow((n+1)/2,2);
    n = n - 1;
    buffer1 = (n/2)*((n/2)+1);
  }

  result = buffer1 - buffer2;
  cout << result << endl;

  return 0;
}
