#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,k;
	
	cin>>n;
	cin>>k;
	while(k--){
		vector<int>array;
	
		for(int i=0;i<k;i++){
			int a;
			cin>>a;
			array.push_back(a);
		}	
		int min=1001;
		for(int i=array.size()-2;i>=0;i--){
			int c;
			if(array[i]<array[i+1]){
				cout<<":D\n";
				int t;
				for(int j=i+1;j<array.size();j++){
				if(array[j]>array[t] && array[j]<min){
					cout<<"hello"<<"\n";
					min=array[j];
					c=j;
				}
				}
				swap(array[t],array[c]);
				sort(array.begin()+i+1, array.end());

				break;
			}
		
		}
		for(int i=0;i<array.size();i++){
			cout<<array[i]<<endl;
		}
	}

}