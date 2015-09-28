#include <bits/stdc++.h>
#define ll long long
#define PI (arctg(1))/4
#define MAX 50000
#define vecI vector<int>
#define vecC vector<char>

using namespace std;
vecI mv;

void divisores(int n)
{
	mv.clear();	
	int a;
	while(a!=n)
	{
		if(n%a == 0)
		{
			mv.push_back(a);
			a++;
		}
	}
}

bool isLucky(vecI mv){
	int cont;
	int n = mv.size();
	for(int  i = 0; i < n; i++)
	{
		if(mv[i]== 4 or mv[i] == 7)
			cont++;
	}
	if(cont == n) return true;
		else return false;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	divisores(n);
	bool  z =  isLucky(mv);
	if(!z) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	return 0;
}

