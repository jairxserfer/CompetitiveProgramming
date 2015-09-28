#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void printArray(int A[], int size);
void cinArrey(int a[],int size);
int plusArrey2(int a[],int size);

int main(){
	while(cin){
	 int max;
	 int  n,m;
	 cin>>n>>m;
	 int k;
	 cin>>k;
	 int array[k]; 
	 max=n*m;
	//llenando las variables
	for(int i=0;i<k;i++){
	cin>>array[k];
	}

	//Sumando el total
	int c=0;
	for(int i=0;i<k;i++){
		c=c+array[i];
	}

	//haciendo el quick sort si el tiempo no es sobre pasado
	if(c<=max){
     
    mergeSort(array, 0,k - 1);
 	int z=plusArrey2(array,k);
    cout<<k<<"\n";
    }	

    if(c>max){
    mergeSort(array, 0,k - 1);
    int z=plusArrey2(array,k);
    int buffer=0,floa;
    int aleatory;
	do{
		buffer++;
		aleatory=n-buffer;
		z=plusArrey2(array,aleatory);
		mergeSort(array, 0,aleatory - 1);
		}while(max<z);
		cout<<aleatory<<"\n";
    }

	printf("\n");
	
}return 0;}

int plusArrey2(int a[],int size){
	int c=0;
	for(int i=0;i<size;i++){
		c=c+a[i];
	}
	return c;
}


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

void cinArrey(int a[],int size){
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
}