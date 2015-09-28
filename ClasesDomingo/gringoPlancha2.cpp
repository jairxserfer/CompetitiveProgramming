#include <iostream>

using namespace std;

int main(){
	int *p, *q, *r;
	p = new int; q = new int;
	*p = 10;
	q++;
	r = p;
	p = p + 3;
	cout<< p << " "<< q <<" "<< r<<" "<<endl;
}