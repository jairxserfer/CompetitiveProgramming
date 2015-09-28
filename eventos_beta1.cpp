#include <bits/stdc++.h>

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
	
void registroEvento(Eventos e[], int &nroE, Proveedores p[], int nroP);
void buscarEvento(Eventos e[], int nroE, Proveedores p[], int nroP);
void menuEventos(Eventos e[], int &nroE, Proveedores p[], int nroP);
void mostrarEventos(Eventos e[], int &nroE, Proveedores p[], int nroP);
FILE *E;

//Crear nuevo Evento
void registroEvento(Eventos e[], int &nroE, Proveedores p[], int nroP){
	 
	 
	 char temp[2];
     char num[5], proveedor[8], codigo[8];
	 int tipo, op, indice;
	 bool existe;
  
     system("CLS");
            
     if (nroP>0)
     {    		
		 	E=fopen("eventos.txt","w");
			if (E==NULL)
			cout<<"No se puede abrir el archivo de Eventos \n";
			else
			{
				cout<<"Creacion exitosa del archivo \n";
				fclose(E);
			}  	
			
	     cout<<"\n\tNUEVO EVENTO\n";
         cout<<"\t======================\n\n\n";
         itoa(nroE+1,num,10);  //convierte numero a texto
         strcpy(codigo,"E00");
         strcat(codigo,num); //concatena las cadenas
         strcpy(e[nroE].codigo,codigo);
         
         cout<<"\tCodigo: "<<e[nroE].codigo<<"\n\n";
         
         cout<<"\n\tELIJA UN TIPO:\t1.-CONCIERTO\t2.-DEPORTE\t3.-ADMISION\n\t\t\t4.-TEATRO\t5.-CONFERENCIA";
         do
         {
           cout<<"\n\n\tElija una opcion: ";cin>>op;
           } while (op<1 || op>5);
           
           switch (op)
           {
                  case 1: strcpy(e[nroE].tipo, "CONCIERTO"); break;
                  case 2: strcpy(e[nroE].tipo, "DEPORTE"); break;
                  case 3: strcpy(e[nroE].tipo, "ADMISION"); break;
                  case 4: strcpy(e[nroE].tipo, "TEATRO"); break;
                  case 5: strcpy(e[nroE].tipo, "CONFERENCIA"); break;
           }
           	
    		do{
         	cout<<"\n\tDIA:\t\t";
    		cin>>e[nroE].nac.dia;
    		} while(e[nroE].nac.dia<1 or e[nroE].nac.dia>31);
    
    		do{		
    		cout<<"\n\tMES:\t\t";
    		cin>>e[nroE].nac.mes;
    		} while(e[nroE].nac.mes<1 or e[nroE].nac.mes>12);
    
    		do{		
    		cout<<"\n\tANO:\t\t";
    		cin>>e[nroE].nac.ano;
    		} while(e[nroE].nac.ano<2014);
    
    		gets(temp);
    		cout<<"\n\tDESCRIPCION:\t";
    		gets(e[nroE].descripcion);
    		cout<<"\n\tSTOCK:\t\t";
    		cin>>e[nroE].stock;     
    	 	
    	 	cout<<"\n\n\n\n\n\n\tSELECCIONE AL PROVEEDOR DEL EVENTO:\n\n";
    	 	
    	 	cout<<"\tOPCION\tCODIGO\tRAZON SOCIAL\n";
    	 	cout<<"\t--------------------------------------------------------------------\n\n";
            for (int i=0; i<nroP ;i++)
            {
                if (strcmp(p[i].estado,"activo")==0)
                   cout<<"\t"<<i+1<<".-\t"<<p[i].codigo<<"\t"<<p[i].razon<<"\n";
            }
            
/*            do
            {
            
            cout<<"\n\n\t Elija la opcion del Proveedor: "; cin>>op;
            } while (op<1 ||op>nroP);
*/            
           gets(temp);
           existe=false;
           do{
              cout<<"\n\n\tElija el codigo del Proveedor:  "; 
              gets(proveedor);
	   
              for (int i=0; i<nroP; i++)
	          {
		          if (strcmp(p[i].estado,"activo")==0 && strcmp(strupr(proveedor),p[i].codigo)==0)  
                  {
                     existe=true;
                     indice=i;
                  }
              }
              if (existe==false) cout<<"\tEl codigo ingresado no existe, intente de nuevo\n\n";   
            } while (existe==false);

  //        
          strcpy(e[nroE].codProv,strupr(proveedor));



             
             nroE=nroE+1;
         
    	cout<<"\n\t";
     }
     else
         cout<<"\n\n\n\tDEBE INGRESAR ANTES POR LO MENOS UN PROVEEDOR \n\n\t";     
     
     
     	if (E!=NULL)
		{
			fwrite(&e, sizeof(e),1,E);
			if (!ferror(E))
				fclose(E);
			else
				cout<<"Error de escritura en archivo Evento \n";
		}
		else
			cout<<"No se puede abrir el archivo Evento \n";	
     
     
     
     
     system("PAUSE");
     menuEventos(e, nroE, p, nroP);


}


void mostrarEvento(Eventos e[], int &nroE, Proveedores p[], int nroP){
	
	cout<<"Mostrar archivo de Eventos:\n";
	E=fopen("Eventos.txt","r");
	
	if(E==NULL){
		cout<<"No se puede abrir el archivo Eventos \n";
		exit(1);
	}
	cout<<"Datos de los Eventos\n";
	cout<<"Ingrese el numero de Evento creado que quiere ingresar:\n";
	int i;
	cin>>i;
	i=i++;
	while(!(feof(E))){
		fread(&e, sizeof(e),1,E);
		
		if(ferror(E)){
			cout<<"Error en la lectura de archivo Eventos:\n";
			exit(1);
		}
		
		if(!feof(E)){
			cout<<"CODIGO: "; cout<<e[i].codigo<<"\n";
			cout<<"Codigo Prov: ";cout<<e[i].codProv<<"\n";
			cout<<"Tipo :";cout<<e[i].tipo<<"\n";
			cout<<"Descripcion: ";cout<<e[i].descripcion<<"\n";
			//cout<<"Fecha: ";cout<<e[1].nac<<"\n";
			cout<<"Stock: ";cout<<e[i].stock<<"\n";
			
		}
	}
	
}





void buscarEvento(Eventos e[], int nroE, Proveedores p[], int nroP){
     int op;
	 char tipo[50];
	 int mes, ra;
		
     system("CLS");
     cout<<"\n\tBUSCAR EVENTO\n";
     cout<<"\t======================\n\n\n";
     
     cout<<"\n\tELIJA UN TIPO:\t1.-CONCIERTO\t2.-DEPORTE\t3.-ADMISION\n\t\t\t4.-TEATRO\t5.-CONFERENCIA";
	 do
	 {
       cout<<"\n\n\tElija una opcion: ";
       cin>>op;
     } while (op<1 || op>5);


     switch (op)
     {
            case 1: strcpy(tipo, "CONCIERTO"); break;
            case 2: strcpy(tipo, "DEPORTE"); break;
            case 3: strcpy(tipo, "ADMISION"); break;
            case 4: strcpy(tipo, "TEATRO"); break;
            case 5: strcpy(tipo, "CONFERENCIA"); //break;
     }
	 
//     cout<<"\tIngrese Tipo del Evento a buscar: "; cin>>tipo;
	 cout<<"\n\n\n\tIngrese Mes del Evento a buscar: "; cin>>mes;	
	
	
	cout<<"\n\n\tCODIGO\tTIPO\t\tFECHA\t\tSTOCK\t\tPROVEEDOR\n\n";
	
	for(int i=0; i<nroE; i++)
	{
		if (strcmp(tipo,e[i].tipo)==0 && e[i].nac.mes==mes)
		{  
			cout<<"\t"<<e[i].codigo;
			cout<<"\t"<<e[i].tipo;
			
			ra=strlen(e[i].tipo);
			
			for (int a=0; a<(16-ra); a++)
			    cout<<" ";
/*			if(e[i].tipo=="TEATRO")
				cout<<"     ";
			if(e[i].tipo=="CONCIERTO")
				cout<<"  ";
			if(e[i].tipo=="DEPORTE")
				cout<<"    ";
*/				
			cout<<e[i].nac.dia<<"/";
			cout<<e[i].nac.mes<<"/";
			cout<<e[i].nac.ano;
			cout<<"\t"<<e[i].stock;	
			
            for (int b=0; b<nroP; b++)
            {
                if (strcmp(e[i].codProv, p[b].codigo)==0)
                   cout<<"\t\t"<<p[b].razon<<endl;
            }
			
//            cout<<"\t"<<e[i].descripcion<<"\n";
		}	
	}
	
	cout<<"\n\t";
	system("PAUSE");
	menuEventos(e, nroE, p, nroP);    
}

void menuEventos(Eventos e[], int &nroE, Proveedores p[], int nroP)
{
     int op;
     system("CLS");
     cout<<"-----------------------"<<endl;	
     cout<<"Eventos"<<endl;
     cout<<"-----------------------"<<endl;
     cout<<"1: Ingresar nuevo evento\n";
     cout<<"2: Busqueda de eventos por mes\n";
     cout<<"3: Volver al menu principal\n";
     cout<<"---------------------------------------------"<<endl;
     cout<<" "<<endl;
	 cout<<"Por favor digite el numero de la opcion: "<<endl;
     cout<<"=>   ";
	 cin>>op; 
     switch (op)
     {
            case 1: registroEvento(e,nroE,p,nroP);break;
            case 2: buscarEvento(e,nroE,p,nroP);break;
            case 3: break;
            default: menuEventos(e,nroE, p, nroP);break;
     }
}





int main(){

	return 0;
}
