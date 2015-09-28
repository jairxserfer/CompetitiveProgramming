#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;
int main(){
 int n;
 cin>>n;
 vector <string> words;
 for(int i=0;i<n;i++){
 string a;
 cin>>a;
 words.push_back(a);
}
 int cont=0;
 sort(words.begin(), words.end());
int j; 
for(int i=0;i<n;i++){
 	for( j=0;j<cont+1;j++){
	cout<<words[i][j]<<"\t";

 cont++;
  if(words[i][j]==words[i+1][j]) break;
 else {
 for(int i=0;i<n;i++){
        for(int j=0;j<cont;j++){
        cout<<words[i][j]<<"\t";
}
cont++;
}}
}
}
}
