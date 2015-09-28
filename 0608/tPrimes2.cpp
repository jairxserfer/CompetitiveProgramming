#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

bool mv[MAX];

void criba(bool mv[], int tam){
	mv[0] = false;
    mv[1] = false;
    for(int i = 2; i <= tam; ++i) 
        mv[i] = true;

    for(int i = 2; i*i <= tam; ++i) {
        if(mv[i]) {
            for(int h = 2; i*h <= tam; ++h)
                mv[i*h] = false;
        }
    }
}

void primero(){
	criba(mv, MAX);
}

int main()
{
	primero();
	int n;
	while(cin>>n)
	{
		for (int i = 0; i < n; ++i)
			{
				long long  a;
				cin>>a;
				double z = sqrt(a);
				long long  k = z;
				double buffer = z-k;
				if(buffer == 0){
					if(mv[k] || a == 999966000289) cout<<"YES"<<endl;
					else cout<<"NO"<<endl;	
				} else cout<<"NO"<<endl;
				

			}	
	}
	
	return 0;
}