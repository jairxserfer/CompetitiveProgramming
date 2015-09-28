#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<iomanip>
#include<windows.h>

using namespace std;

struct Fecha
{
       int dia;
       int mes;
       int ano;
};

struct Proveedores
{
	char codigo[6];
	char ruc[15];
	char razon[100];
	char telefono[11];
	char correo[100];
	char direccion[100];
	char estado[15];
};


struct Clientes
{
	char codigo[6];
	char Dni[10];
	char nombre[40];
	char apellido[40];
	char nrotarjeta[40];
	char socio[40];
	char estado[15];
};

struct Ventas
{
    char codVenta[6];
    char codCliente[6];
    char codProveedor[6];
    char codEvento[6];
    char zona[40];
    Fecha fechVenta;
    int cantidad;
    float precio;
    float descuento;
    float total;
};



struct Eventos{
	char codigo[6];
	char codProv[6];
	char tipo[20];
	char descripcion[100];
	Fecha nac;
	int stock;
};
	
void registroEvento(FILE *E, Eventos event);
void buscarEvento(FILE *E, Eventos event);
void menuEventos(FILE *E,Eventos event);
void mostrarEventos(FILE *E, Eventos event);
FILE *E;


void registroEvento(FILE *E, Eventos event){
	system("CLS");
	E=fopen("evento.txt","w");
	if(E==NULL)
		cout<<"No se puede abrir el archivo\n";
	else{
		cout<<"Creación exitosa\n";
		fclose(E);
	}
	E=fopen("evento.txt","a");
	char temp[2];
	cout<<"\tIngrese el codigo\n\t";gets(temp);gets(event.codigo);
	cout<<"\tIngrese el tipo de evento\n\t";gets(temp);gets(event.tipo);
	cout<<"\tIngrese la descripción del evento\n\t";gets(temp);gets(event.descripcion);
	cout<<"\tIngrese la fecha\n\t";cin>>event.nac.dia;cin>>event.nac.mes;cin>>event.nac.ano;
	cout<<"\tIngrese el stock\n";cin>>event.stock;cout<<"\n";
	
	if(E!=NULL)
	{
		fwrite(&event,sizeof(event),1,E);
		if(!ferror(E))
			fclose(E);
			else
				cout<<"Error al llenar el archivo\n";	
	}
	else
		cout<<"No se puede abrir el archivo\n";
		system("PAUSE");
}


void buscarEvento(FILE *E, Eventos event){
	system("CLS");
	cout<<"\t\t\tBUSCAR EVENTO\n\n\n";
	E=fopen("evento.txt","r");
	if(E==NULL){
		cout<<"NO EXISTE EL ARCHIVO\n";
		system("PAUSE");
	}
	char codigo[6];
	cout<<"Ingrese el codigo a buscar\n";gets(codigo);
	while(!feof(E)){
		fread(&event,sizeof(event),1,E);
		if(ferror(E))
		{
			cout<<"Error de lectura del archivo\n";	
			exit(1);
		}
		if(strcmp(event.codigo,codigo)==0){
			cout<<"\tCODIGO\n\t";cout<<event.codigo<<"\n";
			cout<<"\tTIPO DE EVENTO\n\t";cout<<event.tipo<<"\n";
			cout<<"\tDESCRIPCION DEL EVENTO\n\t";cout<<event.descripcion<<"\n";
			cout<<"\tFECHA DEL EVENTO\n\t";cout<<event.nac.dia<<" ";cout<<event.nac.mes<<" ";cout<<event.nac.ano<<"\n";
			cout<<"\tSTOCK\n";cout<<event.stock;cout<<"\n";
		}else cout<<"Codigo no encontrado\n";
		system("PAUSE");
	}
	
	
	system("PAUSE");
}

void mostrarEventos(FILE *E, Eventos event){
	cout<<"\t\t\tMOSTRAR EVENTOS\n\n\n";
	E=fopen("eventos.txt","r");
	if(E==NULL)
	{
		cout<<"No se puede abrir el archivo\n\n";
		exit(1);
	} cout<<"Datos el paciente\n";
	
	while(!feof(E))
	{
		fread(&event,sizeof(event),1,E);
		if(ferror(E)){
			cout<<"Error al leer el archivo\n";
			exit(1);
		}
		if(!feof(E))
		{
			cout<<"\tCODIGO\n\t";cout<<event.codigo<<"\n";
			cout<<"\tTIPO DE EVENTO\n\t";cout<<event.tipo<<"\n";
			cout<<"\tDESCRIPCION DEL EVENTO\n\t";cout<<event.descripcion<<"\n";
			cout<<"\tFECHA DEL EVENTO\n\t";cout<<event.nac.dia<<" ";cout<<event.nac.mes<<" ";cout<<event.nac.ano<<"\n";
			cout<<"\tSTOCK\n";cout<<event.stock;cout<<"\n";
		}fclose(E);
		
		system("PAUSE");
	}
}

void menuEventos(FILE *E,Eventos event){
	int op;
     do{
      Beep(700,80);Beep(900,70);Beep(1300,150);
      system("cls");
      cout<<"--------------------------------"<<endl;	
      cout<<"EVENTO"<<endl;	
	  cout<<"--------------------------------"<<endl;
	  cout<< "1: Registrar nuevo Evento\n";
	  cout<< "2: Buscar Evento\n";
	  cout<< "3: Mostrar Evento\n";
	  cout<< "4: Salir\n";
	  cout<<"--------------------------------"<<endl;
      cout<<" "<<endl;
	  cout<< "Por favor, digite el numero de la opcion: "<<endl;
      cout<< "=>   ";
	  cin>>op;
      while(op<1||op>3){
     	             Beep(500,850); 
                     cout<<"No existe esa opcion. Por favor,ingrese una opcion valida: "<<endl;
                     cout<< "=>   ";cin>>op;
                     };
      switch (op)
      {
            case 1: Beep(1000,200);registroEvento(E,event); break;
            case 2: Beep(1000,200);buscarEvento(E,event); break;
            case 3: Beep(1000,200);mostrarEventos(E,event) ;break;
      };
     }while(op!=4);
     Beep(1000,200);
}

int main(){

	return 0;
}
