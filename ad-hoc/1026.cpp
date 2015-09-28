#include <bits/stdc++.h>

using namespace std;

vector<int> convertirBinario(unsigned int num, vector<int> v){
	 if(num > 0){  
        while(num>0){  
           if(num%2 == 0)
           		v.push_back(0);  
                  
            else  
                v.push_back(1);  
            num = num/2;  
        }  
    }
    
    return v;
}

int carrynotCarry(vector<int> v1, vector<int> v2){
	while( v1.size() != v2.size() ){
		if(v1.size() == v2.size()) break;
		if(v1.size() < v2.size()){
			v1.push_back(0);
		}
		if(v2.size() < v1.size()){
			v2.push_back(0);
		}
	}
		int cont = 0;
		int buffer = 0;
	for(int i = 0; i < v1.size(); i++){
		if(v1[i] != v2[i]){
			buffer = pow(2,cont) + buffer;
		}
		cont++;
	}
	return buffer;
	/*reverse(v1.begin(), v1.end());
	reverse(v2.begin(), v2.end());
	for(int i = 0; i < v1.size(); i++) cout<< v1[i];
		cout<<endl;
	for(int i = 0; i < v2.size(); i++) cout<< v2[i];
	*/
}

int main(){
		
	unsigned int a, b;
	while(scanf("%u %u", &a, &b)!= EOF){
		vector<int> v1;
		vector<int> v2;
		v1 = convertirBinario(a,v1);
		v2 = convertirBinario(b,v2);
		int result = carrynotCarry(v1,v2);
		cout<<result<<endl;	
	}
	
}