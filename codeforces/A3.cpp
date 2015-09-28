#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int mv[3];
	cin>>n;
	
	int min1, max1;
	int min2, max2;
	int min3, max3;
	
	cin>>min1>>max1;
	cin>>min2>>max2;
	cin>>min3>>max3;
	
	int buffer = 0;
	do{
		buffer++;
		mv[0] = buffer;
		n--;
	} while(buffer < min1 );	
	buffer = 0;
	
	do{
		buffer++;
		mv[1] = buffer;
		n--;
	} while(buffer < min2 ) ;
	buffer = 0;
	
	do{
		buffer++;
		mv[2] = buffer;
		n--;
	} while(buffer < min3 ) ;
	
	
	
	
	return 0;
	
}
