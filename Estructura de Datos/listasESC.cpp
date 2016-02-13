#include <bits/stdc++.h>
//Este programa permite ingresar elementos en
//una Lista circular simple

using namespace std;

struct nodo{
  int dato;
  struct nodo *sgte;
};
typedef nodo *TLista;

void insertarFinal(TLista &Lista, int numero)
{
  TLista q = new(struct nodo), fin;
  q -> dato = numero;
  q -> sgte = Lista;
  if(Lista == NULL)
  {
    Lista = q;
    Lista -> sgte = Lista;
    fin = q;
  }
  else
  {
    fin -> sgte = q;
    q -> sgte = Lista;
    fin = q;
  }

}




void mostrarSH(TLista Lista){
  TLista  q = Lista;
  TLista  m = Lista;
  while (m-> sgte != q) {
    cout << m -> dato << " ";
    m = m -> sgte;
  }
  cout << m -> dato << endl;
}




int main(int argc, char const *argv[]) {
  TLista Lista = NULL;
  TLista Lista2 = NULL;
  int a,k;
  cout << "Ingrese el numero de elementos a ingresar a la Lista\n";
  cin >> k;
  for(int i=0;i<=k;i++){
    a=rand() %100;
    insertarFinal(Lista,a);
    insertarInicio(Lista2,a);
  }
  mostrarSH(Lista);
  mostrarSH(Lista2);
  return 0;
}
