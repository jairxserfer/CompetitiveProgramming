#include <bits/stdc++.h>

using namespace std;

string operation(string word1,string word2){

  reverse(word1.begin(), word1.end());
  reverse(word2.begin(), word2.end());
  long long cont = 0;
  for(int i = 0; i < word2.size(); i++){
    if(word1[i] ==  word2[i]) cont++;
      else break;
  }
  if(cont == word2.size()) return "encaixa";

  return "nao encaixa";
}

int main(int argc, char const *argv[]) {
  long long t;
  cin >> t;
  while(t--){
    string word1 , word2;
    cin >> word1 >> word2;
    string result = operation(word1,word2);
    cout << result << endl;
  }
  return 0;
}
