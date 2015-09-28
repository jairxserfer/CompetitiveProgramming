#include <iostream>

using namespace std;

bool criba(bool m[], int tam){
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
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int cont=0;
		for(int i=n;i<m;i++){
			int c;
			for (c = 0; n; c++)
			n &= n - 1;
			cout<<c<<endl;
			if(c!=0){
				bool m[c];
				if(criba(m,c)==1) cont++;
			}
				
		}cout<<cont<<endl;
		}
	return 0;	
	}
	
