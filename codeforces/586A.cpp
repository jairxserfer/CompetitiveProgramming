#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
    	vector<int> v(n);
        for(int i=0;i<n;i++){
        	cin>>v[i];
        }
        int cont =0;
        for(int i=0;i<v.size();i++){
        	int aux =v[i];
        	if(v[i]==1){
        		if(i+1<v.size()){
        			if(v[i+1]==1){
        				cont++;
        			}else{
        				if(i+2<v.size()){
        					if(v[i+2]==1){
        						cont++;
        					}else{
        						i+=2;
        						cont++;
        					}
        				}else{
        					cont++;
        				}
        			}
        		}else{
        			cont++;
        		}
        	}else{
        		if(v[i]==0&&i!=0){
        			if(i+1<v.size()){
        				if(v[i]==0&&v[i-1]!=0&&v[i+1]==1){
        				cont++;
        				}
        			}
        		}
        	}
        }
        cout<<cont<<endl;
    }

}
