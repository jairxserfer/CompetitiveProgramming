#include <bits/stdc++.h>
using namespace std;

int charToInt(char a){
  int buffer = a - 48;
  return buffer;
}

void result(string a, string b){
  vector<int> mv;
  for(int i = 0; i < b.size(); i++){
    int buffer = 0;
    buffer = charToInt(a[i]) - charToInt(b[i]);
    mv.push_back(abs(buffer));
  }
  for(int i = 0; i < mv.size(); i++)
  {
    if(i != 0 && mv[i] != 0)
    cout << mv[i];
  }
  cout << endl;
}

int main(){
  string a, b;
  cin >> a >> b;
  result(a,b);
  return 0;
}
