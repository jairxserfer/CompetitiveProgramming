#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
 vector<int>array;
 int size;
 cin>>size;
 cout<<"Ingrese los elementos del arreglo:\t";
 for(int i=0;i<size;i++){
 int a;
 cout<<"\t";
 cin>>a;
 array.push_back(a);
 }
 for(int i=0;i<size;i++){
 cout<<array[i]<<" ";
}
 cout<<"\n";
 sort(array.begin(),array.end());
  for(int i=0;i<size;i++){
 cout<<array[i]<<" ";
}
 cout<<"\n";
 reverse(array.begin(),array.end());
  for(int i=0;i<size;i++){
 cout<<array[i]<<" ";
}
 cout<<"\n";
}

