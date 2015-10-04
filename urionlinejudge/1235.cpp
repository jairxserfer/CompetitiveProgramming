#include <bits/stdc++.h>

using namespace std;
void mySolution(string myWord){
  vector<char> vector1;
  vector<char> vector2;
  int buffer = myWord.size();
  if(buffer > 0){
    
    if(buffer % 2 == 0)
      buffer = buffer /2;
    else
    {
      buffer = buffer + 1;
      buffer = buffer/2;
    }
    for( int i = 0; i < buffer; i++ )
    {
      vector1.push_back(myWord[i]);
    }
    for( int i = buffer; i < myWord.size(); i++ )
    {
      vector2.push_back(myWord[i]);
    }
    reverse(vector1.begin(),vector1.end());
    reverse(vector2.begin(),vector2.end());
    for(int i = 0; i < vector1.size(); i++)
        cout << vector1[i];
    for(int i = 0; i < vector2.size(); i++)
      cout << vector2[i];
    cout << endl;
  }
}

int main(){
  string word;
  int t ;
  cin >> t ;
  t = t + 1;
  int cont = 0;
  while (t--)
  {
    getline(cin,word);
    mySolution(word);
  }
  return 0;
}
