#include <bits/stdc++.h>

using namespace std;

void captsLock(vector<char> mv){
	char a = mv[0];
	int buffer = a;
	if(buffer>=65 and buffer<=90){
		cout<<mv[0];
	}	else{
		 char z = buffer - 32;
		 cout<<z;
	}
	for( int i = 1; i < mv.size(); i++ )
		{
			char b = mv[i];
			int bufferG = b;
			if(bufferG>=97 and bufferG<=122 )
			{
				cout<<mv[i];
			} else{
				char z2= bufferG + 32;
				cout<<z2;
			}
		}
	cout<<endl;
}


int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	vector<char> mv;
	for(int  i = 0; i < str.size(); i++)
		{
			char k = str[i];
			mv.push_back(k);
		}
	captsLock(mv);
	return 0;
}