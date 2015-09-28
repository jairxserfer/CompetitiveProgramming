#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int numberCases;
	cin>>numberCases;
	while(numberCases--)
	{
		string m;
		vector<char> mv;
		cin>>m;
		for( int i = 0; i < m.size(); i++ )
		{
			char k = m[i];
			mv.push_back(k);
		}	

		sort(mv.begin(), mv.end());
		int cont= 1;
		char z = mv[0];
		vector<char> resultVoc;
		vector<int> valores;
		vector<int> valores2;
		resultVoc.push_back(z);
		for( int i = 1; i < m.size(); i++ )
		{
			if(z == mv[i])
			{
				cont++;
			}else{
				z= mv[i];
				resultVoc.push_back(z);
				valores2.push_back(cont);
				valores.push_back(cont);
				cont = 1;
			}
		}

		sort(valores.begin(), valores.end());
		reverse(valores.begin(), valores.end());
		int buffer;
		for(int i = 0; i < valores2.size(); i++){
			if(valores[0] == valores2[i]) buffer = i;
		}

		cout<<buffer<<" "<<resultVoc[buffer]<<endl;
	}
	return 0;
}