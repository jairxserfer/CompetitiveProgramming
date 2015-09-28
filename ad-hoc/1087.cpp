#include <bits/stdc++.h>

using namespace std;

bool esDiagonal(int x1, int x2, int y1, int y2){
	if( x1 > x2){
		int tempX, tempY;
		x1 = tempX;
		x1 = x2;
		x2 = tempX;
		y1 = tempY;
		y1 = y2;
		y2 = tempY;
	}
	int cont = 0;
	while(x1 < x2 ){
		if( y1 < y2 ){
			x1 = cont + x1;
			y1 = cont + y1;
		}
		if( y2 < y1 ){
			x1 = cont + x1;
			y2 = cont + y2;
		}
		if(x1 == x2 and y1 == y2) return true;
		cont++;
	}
	return false;
}

int numeroMovimientos(int x1,int  y1,int  x2,int  y2){
	if(x1 == x2){
		if(y1 == y2) return 0;
			else return 1;
	}
	if(y1 == y2 and x1 != x2) return 1;
	
	if(!esDiagonal(x1,x2,y1,y2)) return 2;
		else return 1;

}

int main(){
	int x1, y1, x2, y2;
	while( cin>>x1>>y1>>x2>>y2 ){
		if( x1== 0 and x2 == 0 and y1 == 0 and y2 == 0 )
			break;
		int number = numeroMovimientos(x1,y1,x2,y2);
		cout<<number<<endl;
	}
	return 0;
}