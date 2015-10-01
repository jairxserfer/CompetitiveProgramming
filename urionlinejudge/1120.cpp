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
  while(cin >> n && n != '0'){
    string myNumber;
    cin >> myNumber;
    vector<char> mv;
    for( int i = 0; i < myNumber.size(); i++ )
    {
      if(myNumber[i] != n)
      {
        mv.push_back(myNumber[i]);
      }
    }
    if(mv.size() > 0)
    {
      vector<int> mv1 = result(mv);
      sort(mv1.begin(),mv1.end());
      if(mv1[mv1.size()-1] == 0){
        cout << "0\n";
      } else
      {
        for(int i = 0; i < mv1.size(); i++)
        {
          cout << mv1[i];
        }
        cout<<"\n";
      }
    }
    if(mv.size() == 0)
    {
      cout << "0" << endl;
    }
  }
  return 0;
}
