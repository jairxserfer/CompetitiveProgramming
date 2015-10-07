#include <bits/stdc++.h>
using namespace std;

int main(){
  int t, l, c;
  while(cin >> t >> l >> c){
    int buffer = 0;
    int numberofPages = 1;
    if(t == 0 || l == 0 || c == 0)
      numberofPages = 0;
    while(t--){
      string word;
      cin >> word;
      int temporal = word.size();
      temporal = temporal + 1;
      buffer = buffer + temporal;

      if(buffer >= l*c)
      {
        buffer = 0;
        numberofPages++;
      }

    }
    cout << numberofPages << endl;
  }
  return 0;
}
