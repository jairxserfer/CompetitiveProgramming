#include <bits/stdc++.h>

using namespace std;

bool myResult( int k){
  int buffer = 0;
  vector <int> mv;
  while(k != 0)
  {
      buffer = k % 10;
      mv.push_back(buffer);
      k = k/10;
  }
  sort( mv.begin(), mv.end() );
  int cont = 0;
  for( int i = 1; i < mv.size(); i++ )
  {
    if(mv[i] == mv[i-1])
    {
      cont++;
    }
  }
  if(cont != 0)
    return true;

  return false;
}



int yearResult( int n ){
  int buffer = n +1;
  while(myResult(buffer))
  {

    buffer++;
  }
  return buffer;
}


int main(){
  int n;
  cin >> n;
  int result = yearResult(n);
  cout<<result<<endl;
  return 0;
}
