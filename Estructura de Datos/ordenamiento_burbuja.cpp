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

//El método de ordenamiento burbuja es el más simple
//Ordena de dos en dos n veces

void burbuja(Tnodo &Lista, int numeroE)
{
  Tnodo p, q,t;
  int aux, i = 1;
  bool flag;
  t = Lista;
  do
  {
    flag = false;
    p = Lista;
    q = p -> sgte;
    for (size_t j = 1; j <= n -i; j++)
    {
      if(p->dato >= q -> dato)
      {
        aux = p -> dato;
        p ->dato = q-> dato;
        q -> dato = aux;
        flag = true;
      }
      q = q -> sgte;
      p = p -> sgte;
    }
    t = t -> sgte;
    i++;
  }while(flag && i <= n-1);
}


/*Este menu ingresa n numeros aleatorios
  Y luego les realiza el ordenamiento debido
*/
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
		cout<<"\n1. Burbuja";
		cout<<"\n2. Salir";
		cout<<"\nOPCION: ";
		cin>>opc;
		switch(opc){
			case 1: burbuja(Lista,n); break;

		}
		mostrar(Lista);
	}while(opc != 2);
}


int main(int argc, char const *argv[]) {
  Tnodo Lista = NULL;
  int n;
  menu(Lista,n);
  return 0;
}
