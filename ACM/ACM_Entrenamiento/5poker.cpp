#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <vector>


int plusArreyNumbers(int arr[],int size);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void cinArrey(int arr[],int size);
void printArray(int arr[], int size);




using namespace std;
int main(){
	int n, convertLetter;
	char names[20];
	char letter[10];
	cin>>n;
	while(n--){
		cin>>names;
		cin>>letter;
		int a=0;
		for(int i=0;i<20;i++){
			a=names[i]+a;
		}
		for(int i=0;i<n;i++){int number1=0;
		for(int i=0;i<10;i+2){
			number1=letter[i]+number1;
		}
		int number2=0;
		for(int i=1;i<10;i+2){
			number2=letter[i]+number1;
		}
		int plusNumber[2500];
		plusNumber[i]=number1+number2;
		mergeSort(plusNumber,0,9);


	}
		
	}
}


int plusArreyNumbers(int arr[],int size){
	int c=0;
	for(int i=0;i<size;i++){
		c=c+arr[i];
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

void cinArrey(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

void printArray(int arr[], int size){
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}




