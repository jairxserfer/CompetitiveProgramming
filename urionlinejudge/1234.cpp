#include <bits/stdc++.h>

using namespace  std;

vector<char> transformationString( string myString ){
  int cont = 1;
  vector<char> resultFinal;
  for(int i = 0; i < myString.size(); i++)
  {
    if((myString[i] >= 'a' && myString[i] <= 'z') || (myString[i] >= 'A' && myString[i] <= 'Z'))
    {
      if(cont % 2 == 1)
      {
        if(myString[i] >= 'a' && myString[i] <= 'z')
        {
          char buffer = myString[i];
          int buffer2 = buffer;
          buffer2 =  buffer2 - 32;
          char buffer3 = buffer2;
          resultFinal.push_back(buffer3);
        } else
          resultFinal.push_back(myString[i]);
      }
      else
        resultFinal.push_back(myString[i]);
      cont++;
    }
    else
      resultFinal.push_back(myString[i]);
  }

  return resultFinal;
}

int main(){
  string myString;
  while(getline(cin,myString))
  {
    vector<char> result = transformationString(myString);
    for( int i  = 0; i  < result.size(); i++ )
      cout << result[i];
    cout << endl;
     
  }
  return 0;
}
