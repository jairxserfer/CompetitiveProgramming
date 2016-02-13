#include <bits/stdc++.h>
/*Este programa crea una lista enlazada doble
  es decir se puede recorrer en ambas direcciones*/

using namespace std;


struct nodo{
  int dato;
  struct nodo *sgte, *anterior;
};
typedef nodo *TListaDE;


void insertarF(TListaDE &Lista, int aInsertar)
{
  TListaDE q = new(struct nodo), aux;
  q -> dato = aInsertar;
  q -> sgte = NULL;

  if(Lista == NULL)
  {
    q -> anterior = NULL;
    Lista = q;
  }
  else
  {
    q -> anterior = Lista;
    aux = Lista;
    while (aux -> sgte != NULL)
    {
      aux = aux -> sgte;
    }
    aux -> sgte = q;
  }

}

void insertarI(TListaDE &Lista, int aInsertar)
{
  TListaDE q = new(struct nodo), aux;
  q -> dato = aInsertar;
  q -> anterior = NULL;
  if(Lista == NULL)
  {
    q -> sgte = NULL;
    Lista = q;
  }
  else
  {
    //cout << q -> dato << " :D";
    aux = Lista;
    Lista = q;
    q -> sgte = aux;

  }
}

void mostrarSH(TListaDE Lista){
  while(Lista -> sgte != NULL){
    cout << Lista -> dato << " ";
    Lista = Lista -> sgte;
  }
  cout << Lista -> dato << endl;


  }

void mostrarSA(TListaDE Lista){
  TListaDE q = Lista;
  /*while(Lista->sgte != NULL){
    Lista = Lista -> sgte;
  }
  while(Lista-> sgte ->anterior != NULL){
    cout << Lista -> dato << " ";
    Lista = Lista-> sgte    -> anterior;
  }*/
  }

int main(int argc, char const *argv[]) {
  TListaDE Lista = NULL, Lista2 =NULL;
  int a;
  for(int i=0;i<=4;i++){
    a=rand() %100;
    insertarF(Lista,a);
  }
  for(int i = 0; i <= 4; i++){
    a = rand() %100;
    insertarI(Lista2,a);
  }
  mostrarSH(Lista);
  mostrarSH(Lista2);
  mostrarSA(Lista);
  mostrarSA(Lista2);
  return 0;
}
