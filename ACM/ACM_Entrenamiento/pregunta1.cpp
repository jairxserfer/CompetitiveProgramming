#include <iostream>
#include <vector>
#include <cmath>
#include <unistd.h>


#ifdef __cplusplus__

  #include <iostream>
  #include <string>

  void ClearScreen()
    {
    cout << string( 100, '\n' );
    }

#else

  #include <stdio.h>

  void ClearScreen()
    {
    int n;
    for (n = 0; n < 10; n++)
      printf( "\n\n\n\n\n\n\n\n\n\n" );
    }

#endif 


using namespace std;

int op;
//Prototipes
int Menu();
void CinArray(int arr[],int size);
void CoutArray(int arr[],int size);
float MediaAritmetica(int arr[],int size);
float MediaArmonica(int arr[],int size);

int Varianza(int arr[],int size);

//Principal Program
int main(){
	int array[100];
	int size,ma,va,me;
	cin>>size;
	do{
	op=Menu();
	switch(op){
	case 1:
	 ClearScreen();
	 CinArray(array,size);break; 
	case 2: 
	 ClearScreen();
	 CoutArray(array,size);break;
	case 3:
	 ClearScreen();
	 ma=MediaAritmetica(array,size);
	 cout<<ma<<endl;break;
	case 4: 
	 ClearScreen();
	 me=MediaArmonica(array,size); break;
	 cout<<me<<endl;break;
	case 5:	
	 ClearScreen();
	 va=Varianza(array,size); 	
	 cout<<va<<endl;break;
	}	
	}while(op!=6);
	
	
}

//Subprograms
int Menu(){
	cout<<"Menu principal"<<endl;
	cout<<"[1]: Ingreso de datos"<<endl;
	cout<<"[2]: Reportede datos"<<endl;
	cout<<"[3]: Media aritmetica"<<endl ;
	cout<<"[4]: Media armonica"<<endl ;
	cout<<"[5]: Varianza "<<endl ;
	cout<<"[6]: Salir"<<endl;

	do
 	{
 	 cout<<"Digite opcion[]"<<endl;
  	cin>>op;
	}while(op<1 || op > 6);
	return op;
}

void CinArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

void CoutArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\n";
	}	
}

float MediaAritmetica(int arr[],int size){
	int buffer=0;
	int media;
	for(int i=0;i<size;i++){
		buffer=buffer+arr[i];
	}
	media=buffer/(size);
	return media;
}

float MediaArmonica(int arr[],int size){
	int buffer=1;
	int j;
	for(int i=0;i<size;i++){
		float ma,s;
		 s=0;
		for (i=0; i<size;i++)
		{s=s+1./arr[i];}
		ma=size/s;
		j=ma;	
	} 
	return j;
}



int Varianza(int arr[],int size){
	float va,s,me;
 	s=0;
 	me=MediaAritmetica(arr,size);
	for (int i=0; i<size;i++)
    s=s+(arr[i]-me)*(arr[i]-me);
	va=s/size;
	return va;
}