#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
 	int n;
 	vector<string> vect;

 	string linea;
 	cin>>n;
 	//para el getline después de leer el cin
 	cin.ignore();
 	while(n--){
 		getline(cin,linea);
 		vect.push_back(linea);
 	}
 	sort(vect.begin(),vect.end());
 	vector<string> :: iterator it;
 	for(it=vect.begin();it!=vect.end();it++){
 		cout<<*it<<endl;
 	}

 	}