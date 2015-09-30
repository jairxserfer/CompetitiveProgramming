#include <bits/stdc++.h>

using namespace std;

vector<char> firtsOperation(string myString){
  vector <char> returnTo;
  for( int i = 0; i < myString.size(); i++ )
  {
    if((myString[i] >= 'a' and myString[i] <= 'z') || (myString[i] >= 'A' and myString[i] <= 'Z'))
    {
      char buffer = myString[i];
      int numberBuffer = buffer;
      numberBuffer = numberBuffer + 3;
      char bufferChar = numberBuffer;
      returnTo.push_back(bufferChar);
    } else
    {
      returnTo.push_back(myString[i]);
    }

  }
  return returnTo;
}

vector<char> thirdOperation(vector<char> secondResult){
  int sizeS = secondResult.size();
  vector<char> returnTo;
  sizeS = sizeS/2;
  for(int i = 0; i < sizeS ; i++)
  {
    returnTo.push_back(secondResult[i]);
  }

  for(int i = sizeS; i < secondResult.size(); i++)
  {
    char buffer = secondResult[i];
    int numberBuffer = buffer;
    numberBuffer = numberBuffer - 1 ;
    char bufferChar = numberBuffer;
    returnTo.push_back(bufferChar);
  }
  return returnTo;
}

int main(){
  int t;
  cin >> t;
  t = t + 1;
  int cont = 0;
  while(t--)
  {
      string myWord;
      getline(cin,myWord);
      vector<char> mv;
      vector<char> mv1;
      mv = firtsOperation(myWord);
      reverse(mv.begin(),mv.end());
      mv1 = thirdOperation(mv);
      if(mv1.size()> 0){
        for(int i = 0; i < mv1.size(); i++)
          cout << mv1[i];
        cout << endl;
      }

  }
  return 0;
}
