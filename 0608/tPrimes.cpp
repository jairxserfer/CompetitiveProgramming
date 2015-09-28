#include <bits/stdc++.h>
#define vcI vector<int>

using namespace std;


int tam = 1000;
bool m[1000];
bool m2[100001];
void criba2(){
	m[0] = false;
    m[1] = false;
    for(int i = 2; i <= tam; ++i) 
        m[i] = true;

    for(int i = 2; i*i <= tam; ++i) {
        if(m[i]) {
            for(int h = 2; i*h <= tam; ++h)
                m[i*h] = false;
        }
    }

    m2[0] = false;
    m2[1] = false;
    for(int i = 2; i <= 100001; ++i){
    	m2[i] = false;
    }

    for(int i = 2; i <= tam; ++i)
    {
    	if(m[i] = true)
    	{
    		i= pow(i,2);
    		m2[i] = true;
    	} 
    }
 }

int main(int argc, char const *argv[])
{
	criba2();
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		if(m2[k]) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
	}	
	return 0;
}