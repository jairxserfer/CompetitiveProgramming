#include <bits/stdc++.h>

using namespace std;

vector<int> result(vector<char> mv){
  long long number = 0;
  vector<int> resultFinal;
  for(int i = 0; i < mv.size(); i++ )
  {
    char buffer = mv[i];
    int k = buffer -48;
    resultFinal.push_back(k);
  }
  return resultFinal;
}

int main(){
  char n;
  while(cin >> n && n != '0')
  {
    string myNumber;
    cin >> myNumber;
    int cont = 0;
    vector<char> buffer;
    vector<char> buffer2;
    for( int  i = 0; i < myNumber.size(); i++ )
    {
      if(myNumber[i] != n)
        buffer.push_back(myNumber[i]);
    }

    for( int  i = 0; i < buffer.size(); i++ )
    {
      if(buffer[i] != '0')
        break;
      else
        cont++;
    }
    for(int i = cont; i < buffer.size(); i++)
        buffer2.push_back(buffer[i]);
    vector<int> resultado;
    resultado = result(buffer2);
    if(resultado.size() == 0)
      cout << "0";
    else
      for(int  i = 0; i < resultado.size(); i++)
        cout << resultado[i];
    cout<<endl;
  }
  return 0;
}
