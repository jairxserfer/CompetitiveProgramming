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

void insercion(Tnodo &Lista)
{
  Tnodo q = Lista, t;
  int i = 1;
  while( q -> sgte != NULL)
  {
    
    if(q -> dato > q -> sgte -> dato)
    {
      t = Lista;
      int j = i;
      while(j--)
      {
        if(t -> dato > q -> sgte -> dato)
        {
          int r = q->sgte->dato;
          q->sgte->dato = t -> dato;
          t -> dato = r;
        }
        t = t -> sgte;
      }
    }
    i++;
    q =  q -> sgte;
  }
  cout << "\n";
}

int main(int argc, char const *argv[]) {
  Tnodo Lista = NULL;
  int a;
  for(int i=0;i<=4;i++){
    a=rand() %100;
    insertarE(Lista,a);
  }
  mostrar(Lista);
  insercion(Lista);
  mostrar(Lista);
  return 0;
}
