#include <bits/stdc++.h>

using namespace std;


struct nodo{
  int dato;
  struct nodo *sgte;
};

typedef nodo *Tnodo;

/*
  Lo primero que debemos hacer es crear la Lista para poder
  ordenarla.
*/

//Ingresa cada elemento  a la Lista
void insertarLista(Tnodo &Lista, int aInsertar)
{
    Tnodo q = new(struct nodo), p;
    q -> dato = aInsertar;
    q -> sgte = NULL; //Esta Línea debe apuntar a Lista en caso sea circular
    if(Lista == NULL)
    {
      Lista = q;
    } else
    {
      p = Lista;
      while (p -> sgte != NULL)
      {
        p = p -> sgte;
      }
      p -> sgte = q;
    }
}

//Método de ordenamiento selección
void seleccion(Tnodo &Lista, int tama)
{
  Tnodo t, q, min;
  t = Lista;
  int aux;
  for (size_t i = 1; i < tama; i++)
  {
    min = t;
    q = min -> sgte;
    for(int j = i + 1; j <= tama; j++)
    {
      if( q-> dato < min -> dato)
        min = q;
      q = q -> sgte;
    }
    aux = t -> dato;
    t -> dato =  min -> dato;
    min -> dato = aux;
    t = t -> sgte;
  }
}

void mostrar(Tnodo Lista)
{
  while(Lista != NULL){
    cout << " " << Lista->dato;
    Lista = Lista -> sgte;
  }
}

void menu(Tnodo &Lista,int n){
	int opc,a;
	cout<<"\n--------ORDENAMIENTO-------";
	cout<<"\n\nIngrese el numero de datos a ordenar: ";
	cin>>n;
	srand(time(NULL));
	for(int i=0;i<=n;i++){
		a=rand() %100;
		insertarF(Lista,a);
	}
	mostrar(Lista);
	do{
		cout<<"\n\nSeleccione el metodo";

		cout<<"\n1. Seleccion";
		cout<<"\n2. Salir";
		cout<<"\nOPCION: ";
		cin>>opc;
		switch(opc){
			case 1: seleccion(Lista,n); break;
		}
		mostrar(Lista);
	}while(opc!=2);
}


int main(int argc, char const *argv[]) {
  Tnodo Lista=NULL;
  int n;
  menu(Lista,n);
  return 0;
}
