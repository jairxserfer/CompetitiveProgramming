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
  Tnodo q = new(struct nodo), aux;
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
  Tnodo q = new(struct nodo), aux;
  q -> dato = aInsertar;
  q -> anterior = NULL
  if(Lista == NULL)
  {
    q -> sgte = NULL;
    Lista = q;
  }
  else
  {
    aux = Lista;
    q -> sgte = aux;
    Lista = q;
  }
}

void mostrarSH(TListaDE Lista){
  while(Lista -> sgte != NULL){
    
  }
}

void mostrarSA(TListaDE Lista){

}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
