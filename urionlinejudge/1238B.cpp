#include <bits/stdc++.h>
using namespace std;
class Combiner
{
	public:
		string combine(string s1, string s2)
		{
			string output = "";

			int minSize = min(s1.size(),s2.size());

			for(int i = 0; i < minSize; i++)
				output = output + s1[i] + s2[i];

			output = output + s1.substr(minSize) + s2.substr(minSize);

			return output;
		}
};


int main(){
  int t;
  cin >> t;
  while(t--){
    string a, b;
    cin >> a >> b;
    Combiner *c = new Combiner;
    cout << c -> combine(a,b) << "\n";
  }

  return 0;
}
