#include <bits/stdc++.h>
using namespace std;

vector<char>  combiner(string a, string b){
  int buffer1 = a.size();
  int buffer2 = b.size();
  int maxB;
  vector<char> result;
  if(buffer1 > buffer2)
    maxB = buffer1;
  else
    maxB = buffer2;

  for( int i = 0; i <= maxB; i++ )
  {
    result.push_back(a[i]);
    result.push_back(b[i]);
  }
  return result;
}


int main(){
  long  long a;
  cin >> a;
  while(a--){
    string a, b;
    cin >> a >> b;
    vector<char> resultFinal = combiner(a,b);
    for(int i = 0; i < resultFinal.size(); i++)
      cout << resultFinal[i];
    cout << endl;
  }
  return 0;
}
