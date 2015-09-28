#include <iostream>
#include <vector>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

//Prototipes
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void printArray(int arr[], int size);
void cinArreyI(int arr[],int size);
void cinArreyC(char a[],int size);
void convertArreyCharToInt(int arrInt[],int size, char arrChar[]);

using namespace std;
int main(){
	int numberofCase;
	char arrChar[120];
	int sizeChar;
	cout<<"Ingrese el numero de casos:\n";
	cin>>numberofCase;
	while(numberofCase--){
	vector<char> nameX;
	vector<char> nameY;
	vector<char> nameZ;

	for(int i=0;i<nameX.size();i++){
		cin>>nameX[i];
	}

	for(int i=0;i<nameY.size();i++){
		cin>>nameY[i];
	}
	
	for(int i=0;i<nameZ.size();i++){
		cin>>nameZ[i];
	}
	int sizeNameX=nameX.size();
	int arrayNamex[100];
	convertArreyCharToInt(arrayNamex,sizeNameX,nameX);

		//Usar el quick sort
	int arr[50];
    int arr_size;
	printf("Ingrese el numero de elmentos del arreglo\n");
    cin>>arr_size;
	cinArreyI(arr,arr_size); 
    printf("Given array is \n");
    printArray(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    printArray(arr, arr_size);
    return 0;	
	}
	

}


//Subprograms
void merge(int arr[], int l, int m, int r){
  int i, j, k;
  int n1 = m - l + 1;
  int n2 =  r - m;
  
  int L[n1], R[n2];
  
  for(i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for(j = 0; j < n2; j++)
    R[j] = arr[m + 1+ j];
    
  i = 0;
  j = 0;
  k = l;
  
  while (i < n1 && j < n2){
    if (L[i] <= R[j]){
      arr[k] = L[i];
      i++;
    }else{
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  
  while (i < n1){
    arr[k] = L[i];
    i++;
    k++;
  }
  
  while (j < n2){
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r){
  if (l < r){
    int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
  }
}

void printArray(int A[], int size){
  int i;
  for (i=0; i < size; i++)
    printf("%d ", A[i]);
  printf("\n");
}

void cinArreyI(int a[],int size){
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
}

void cinArreyC(char a[],int size){
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
}

void convertArreyCharToInt(int arrInt[],int size, char arrChar[]){
	for(int i=0;i<size;i++){
		int c=0;
		c=arrChar[i];
		arrInt[i]=c;

	}
}