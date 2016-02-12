#include <bits/stdc++.h>

using namespace std;

void Mostrar(std::vector<char> letters, std::vector<int> valoue){
  int buffer = 0;
  int bufferP = 0;
  for ( int i = 0; i < valoue.size(); i++ )
  {
    if(buffer < valoue[i]){
      buffer = valoue[i];
      bufferP = i;
    }
  }
  cout << valoue[bufferP]<<" "<< letters[bufferP] << "\n";

}

void Algorithm(string a){
  vector<char> letters;
  vector<int> valoue;

  sort(a.begin(), a.end());
  char temp = a[0];
  letters.push_back(temp);
  int  cont = 0;
  for(int i = 0; i < a.size(); i++)
  {
      if(temp != a[i]){
        temp = a[i];
        valoue.push_back(cont);
        cont = 0;
        letters.push_back(temp);
      }
      cont++;
  }
  valoue.push_back(cont);
  Mostrar(letters, valoue);
}

int main(int argc, char const *argv[]) {
  int testCases = 0;
  cin >> testCases;
  string a;
  while(testCases--){
    cin >> a;
    Algorithm(a);
  }
  return 0;
}
