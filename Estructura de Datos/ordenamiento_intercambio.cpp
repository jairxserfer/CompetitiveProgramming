#include <bits/stdc++.h>
using namespace std;

struct nodo{
  int dato;
  struct nodo *sgte;
};
typedef nodo *Tnodo;

void insertarE(Tnodo &Lista, int valorD){
  Tnodo t, q = new(struct nodo);
  q -> dato = valorD;
  q -> sgte = NULL;
  if(Lista == NULL)
  {
    Lista = q;
  }
  else
  {
    t = Lista;
    while (t->sgte != NULL) {
      t = t -> sgte;
    }
    t -> sgte = q;
  }
}

void  mostrar(Tnodo Lista) {
  while(Lista != NULL)
  {
    cout << Lista -> dato << " ";
    Lista = Lista -> sgte;
  } cout << "\n";
}


void Intercambio(Tnodo &Lista)
{
    Tnodo k, q;
    k = Lista;
    while( k -> sgte != NULL)
    {
      q = k -> sgte;
      r = k -> sgte;
      int m = q->dato;
      Tnodo j;
      while(q != NULL){
        if(m < q-> dato)
        {
          m = q -> dato;
          j = q;
        }
        q = q -> sgte;
      }
      if(m < k->dato)
      {
        int h = k -> dato;
        k -> dato = m;
        j -> dato = h;
      }
    }
}



int main(int argc, char const *argv[]) {
  Tnodo Lista = NULL;
  int a;
  for(int i=0;i<=4;i++){
    a=rand() %100;
    insertarE(Lista,a);
  }
  mostrar(Lista);
  Intercambio(Lista);
  mostrar(Lista);
  return 0;
}
