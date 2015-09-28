#include <iostream>
using namespace std;
void MinMax(double vec[], double *pmin, double *pmax){
	for(int i=0; i<20;i++)
		cin>>vec[i];
	for(int i=1; i<20;i++){
		for(int j=0; j<=20;j++){
			if(vec[i]<vec[j]){
				double a;
				a=vec[i];
				vec[i]=vec[j];
				vec[j]=a;
			}
		}
	}
	double min;
	double max;
	min=vec[0];
	max=vec[2];
	cout<<min<<" "<<max<<endl;
}

int main(){
	double vec[20];
	double *min;
	double *max;
	MinMax(vec,min,max);
	cout<<min<<max;
}
