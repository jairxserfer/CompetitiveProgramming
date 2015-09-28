#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	string in, out="";
	bool isVoel;
	char vowels[] = {'A', 'a', 'E', 'e', 'O', 'o', 'U', 'u', 'I', 'i', 'Y', 'y'}; 
	getline(cin, in);
	for(int i = 0; i < in.size(); i++)
	{
		if(in[i] <= 'Z' && in[i] >= 'A') 
			in[i] = in[i]-('Z'-'z');
		isVoel = false;
		for(int j = 0; j<sizeof(vowels); j++)
		{
			if(in[i] == vowels[j])
			{
				isVoel = true;
			}
		}
		if(isVoel == false)
			out = out + '.' + in[i];
	}
	cout<<out;

	return 0;
}

