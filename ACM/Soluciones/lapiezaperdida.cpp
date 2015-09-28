#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//First Version

int main(){
	long int size;
	while(cin>>size){
		if(size!=0){
			vector<int> mv;
			vector<int> mv2;
			for(int i=0;i<size;i++){
				mv.push_back(i+1);
			}
			for (int i = 0; i < size-1; ++i)
			{
				int a;
				cin>>a;
				mv2.push_back(a);
			}
			sort(mv2.begin(), mv2.end());
			for(int i=0;i<size;i++){
				if(mv[i]!=mv2[i]) {
					cout<<mv[i]<<endl;
					break;}
			} 
		} else break;
	}
 return 0;
}