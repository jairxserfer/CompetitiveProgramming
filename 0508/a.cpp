#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	vector<ll> mv;
	vector<ll> mv2;

	for(ll  i = 0 ; i < n; i++){
		ll a;
		cin>>a;
		mv.push_back(a);
	}	

	for(ll i = 0; i < n; i++)
	{
		vector<ll> mv3;
		
		for(ll j = 0; j < n; j++ )
		{
			if(i!=j)
			mv3.push_back(abs(mv[i]-mv[j]));
		}

		sort(mv3.begin(), mv3.end());
		cout<<mv3[0];
		reverse(mv3.begin(), mv3.end());
		cout<<" "<<mv3[0]<<endl;

		
	}

	return 0;
}