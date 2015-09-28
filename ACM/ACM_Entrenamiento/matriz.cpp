#include <iostream>
using namespace std;
void CinMatriz(int array[][20],int size,int size2){
	for(int i=0;i<size;i++){
		for(int j=0;j<size2;j++){
			cin>>array[i][j];
		}
	}
}
void CoutMatriz(int array[][20],int size,int size2){
	for(int i=0;i<size;i++){
		 for(int j=0;j<size2;j++){
		 	cout<<array[i][j]<<" ";
		 }
	}

}
int main(){
	int a[numbersAlumns][courses];
	int numbersAlumns, courses,groups;
	cin>>numbersAlumns>>courses;
	CinMatriz()
}