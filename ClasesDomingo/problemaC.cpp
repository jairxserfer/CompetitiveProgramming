#include <bits/stdc++.h>
#define maxN = 50002
using namespace std;

int a[maxN];
long long s;
long long Sum_Acumulad[maxN];
int Contador_2s[maxN];

int main(){
	int n; cin>>n;
	for( int i = 0; i < n; i++ ){
		cin>>a[i];
		if( i > 0 ){
			Sum_Acumulad[i]=Sum_Acumulad[i-1]+a[i];
		} else{
			Contador_2s[i] = Contador_2s[i+1];
		}
	}
	long long respuesta;
	if(Sum_Acumulad[n-1] % 3 != 0){
		respuesta = 0;
	} else{
		s = Sum_Acumulad[n-1]/3;
		Contador_2s[n-1] = 0;
		for( int i = n-2; i >= 0; i--){
			if(Sum_Acumulad[i] == 2*s){
				Contador_2s[i] = Contador_2s[i+1] + 1;
			} else{
				Contador_2s[i] = Contador_2s[i+1];
			}
		}
		respuesta = 0;
		for( int i = 0; i < n; i++ ){
			if( Sum_Acumulad[i] == s ){
				//respuesta+=Contador_2s
			}
		}

	}

	return 0;
}