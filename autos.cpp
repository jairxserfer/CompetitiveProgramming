#include <iostream>
#include <cstdio>
#include <cstdlib>


struct RegAuto
{
	char Placa[7];
	char Marca[30];
	char Modelo[30];
	int Anio;
	int Stock;
};

int menu();
void crear (FILE *H);
void ingresar (FILE *H, RegAuto rAuto);
void mostrar (FILE *H, RegAuto rAuto);
void salir();

using namespace std; 

int main()
{
	int opc;
	char rpta;
	
	RegAuto rAuto;
	FILE H;	
	
	do
	{
		//system ("CLS");
		opc=menu();
		switch (opc)
		{
			case 1: crear(&H); break;
			case 2: ingresar(&H,rAuto); break;
			case 3: mostrar(&H,rAuto); break;
			case 4: salir();
		}
		
		if (opc!=4)
		{
			cout<<"Desea Continuar S/N ===> ";
			cin>>rpta;
		}
		else
			rpta='N';
	} while (rpta=='S'||rpta=='s');
	
	//system("PAUSE");
}

int menu()
{
	int opcion;
	cout<<"Mitsui Autos \n";
	cout<<"Menu Principal \n";
	cout<<"1.- Crear Archivos Autos \n";
	cout<<"2.- Ingresar Nuevo Auto \n";
	//se puede incluir opcion buscar auto
	cout<<"3.- Mostrar Relacion de Autos \n";
	cout<<"4.- Salir \n";
	cout<<"Digite una opcion => ";
	cin>>opcion;
	return opcion;
}

void crear(FILE *H)
{
	H=fopen("Autos.txt","w");
	
	if (H==NULL)
		cout<<"No se puede abrir el archivo Autos \n";
	else
	{
		cout<<"Creacion exitosa \n";
		fclose(H);
	}
}

void ingresar (FILE *H, RegAuto rAuto)
{
	char temp[2];
	cout<<"Ingreso de Nuevo Auto \n";
	cout<<"Digite datos del Auto \n";
	gets(temp);
	cout<<"Placa : ";gets(rAuto.Placa);
	cout<<"Marca : ";gets(rAuto.Marca);
	cout<<"Modelo : ";gets(rAuto.Modelo);
	cout<<"Anio : ";cin>>rAuto.Anio;

	H=fopen("Autos.txt","a");
	
	if (H!=NULL)
	{
		fwrite(&rAuto, sizeof(rAuto),1,H);
		if (!ferror(H))
			fclose(H);
		else
			cout<<"Error de escritura en archivo Auto \n";
	}
	else
		cout<<"No se puede abrir el archivo Autos \n";	
}

void mostrar(FILE *H, RegAuto rAuto)
{
	int i;
	
	cout<<"Mostrar los Autos del Archivo Autos \n";
	
	H=fopen("Autos.txt","r");
	
	if (H==NULL)
	{
		cout<<"No se puede abrir el archivo Autos \n";
	//	system("PAUSE");
		exit(1);
	}
	cout<<"Datos del Auto \n";
	
	while (!feof(H))
	{
		fread(&rAuto, sizeof(rAuto),1,H);
		
		if (ferror(H))
		{
			cout<<"Error de Lectura en archivos Autos \n";
	//		system ("PAUSE");
			exit (1);
		}
		
		if (!feof(H))
		{
			cout<<"Placa : ";cout<<rAuto.Placa<<"\n";
			cout<<"Marca : ";cout<<rAuto.Marca<<"\n";
			cout<<"Modelo : ";cout<<rAuto.Modelo<<"\n";
			cout<<"Anio : ";cout<<rAuto.Anio<<"\n";
			cout<<"========================================================\n";
		}
	}
	
	fclose(H);
}

void salir()
{
	cout<<"GRACIAS POR USAR EL SISTEMA DE VENTA DE AUTOS \n";
}
