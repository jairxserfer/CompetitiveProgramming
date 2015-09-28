#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n && n!= 0)
	{
		
		vector<long long> mv;
		vector<long long> mv2;
		for( int i = 0; i < n; i++ )
		{
			long long a; cin>>a;
			mv.push_back(a);
			mv2.push_back(a);
		}
		sort(mv.begin(), mv.end());
		int cont = 0;
		

		for( int i = 0; i < mv.size(); i++ )
		{
			if(mv[i] == mv2[i]) cont++;
		}
		int cont2 = 0;
		for( int i = 0; i < ( mv.size()-1 ); i++ )
		{
			if(mv[i] < mv[i+1]) cont2++;
		}	
		int k = mv.size();
		cont2++;
		if(cont == k && cont2 == k) cout<<"SI"<<endl;
			else cout<<"NO"<<endl;
		
	}

	return 0;
}