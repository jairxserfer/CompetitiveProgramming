#include <bits/stdc++.h>

using namespace std;

vector<int> mv;

long long descomponerPrimos(long long a){
	long long temp = a;
	long long factorPrimo = 2;
	long long result;
	long long contadorApariciones;
	while(a > 1){
		contadorApariciones = 0;
		while(a%factorPrimo == 0){
			contadorApariciones++;
			a = a/factorPrimo;
		}
		if(contadorApariciones > 0){
			mv.push_back(factorPrimo);
		}
		factorPrimo++;
	}

	reverse(mv.begin(), mv.end());
	long long k = mv[0];
	if( k == temp) return -1;
		else return k;

}


int main(int argc, char const *argv[])
{
	long long n;
	while(cin>>n){
		if(n == 0) break;
		mv.clear();
		long long result = descomponerPrimos(n);
		cout<<result<<endl;
	}	
	return 0;
}