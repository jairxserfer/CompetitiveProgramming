#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin.getline((char*)s.c_str(), 256);
  	cout << s.c_str();
  	int k;
  	cin>>k;
  	vector<char>a;
  	vector<char>b;
  	string segundaPalabra;
  	if(k < s.size()){
  		for(int i = 0; i < k; i++){
  			char v = s[i];
  			a.push_back(v);
  		}
  		for(int  i = k; i < s.size(); i++){
  			char v = s[i];
  			b.push_back(v);
  		}
  	}

  	for(int i = 0; i < a.size(); i++){
  		cout<<a[i];
  	}
  	cout<<" "<<segundaPalabra<<" ";
  	for(int i = 0; i < b.size(); i++){
  		cout<<b[i];
  	}

}	