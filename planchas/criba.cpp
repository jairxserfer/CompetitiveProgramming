#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void coutArray(bool m[], int tam){
 for(int i=1;i<=tam;i++){
	if(m[i]==1) cout<<i<<" Es primo\n"<<endl;
	else cout<<i<<" No es primo\n"<<endl;
}
}

void criba(bool m[], int tam){
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
 coutArray(m,tam);
 //Si m es primo m==1 si no es 0 :D por fin salio :D :D 
 cout<<m[tam]<<endl;	
}


int main(){
int tam;
cin>>tam;
bool  m[tam];
criba(m,tam);
return 0;
}
