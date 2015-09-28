#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
#define pi 2*acos(0.0)

using namespace std;

int main(){
double i,d,l;
double a,b,res;
int n;
cin>>n;
while(n--){
scanf("%lf%lf",&d,&l);
a=l/2;
b=sqrtl((l/2*l/2)-(d/2*d/2));
printf("%.3lf\n",pi*a*b);}
return 0;
}