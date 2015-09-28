#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
	double venta1;
		while(cin>>venta1){
		vector<double>diassemanas;
		diassemanas.push_back(venta1);
		double venta;
		for(int i=1;i<7;i++){
			cin>>venta;
			if(venta!=-1)diassemanas.push_back(venta);
			else {venta1=venta; break;}
		}
		int mayor=0;
		for(int i=1; i<diassemanas.size();i++){
			for(int j=0; j<diassemanas.size()-1; j++){
				if(diassemanas[i]>diassemanas[i+1]) mayor=i;
			}
		}
		if(mayor==1) cout<<"MARTES ";
		if(mayor==2) cout<<"MIERCOLES ";
		if(mayor==3) cout<<"JUEVES ";
		if(mayor==4) cout<<"VIERNES ";
		if(mayor==5) cout<<"SABADO ";
		if(mayor==6) cout<<"DOMINGO ";

		int menor=0;
		for(int i=1; i<diassemanas.size();i++){
			for(int j=0; j<diassemanas.size()-1; j++){
				if(diassemanas[i]<diassemanas[i+1]) menor=i;
			}
		}
		if(menor==1) cout<<"MARTES ";
		if(menor==2) cout<<"MIERCOLES ";
		if(menor==3) cout<<"JUEVES ";
		if(menor==4) cout<<"VIERNES ";
		if(menor==5) cout<<"SABADO ";
		if(menor==6) cout<<"DOMINGO ";
			double buffer=0;
		for(int i=0; i<(diassemanas.size()-1);i++)
			buffer=diassemanas[i]+buffer;
			buffer=buffer/5.0;
			if(buffer>diassemanas[5]){
					cout<<"NO\n";
			}else cout<<"SI\n";
		if(venta1==-1) break;

	}
	
	return 0;
}