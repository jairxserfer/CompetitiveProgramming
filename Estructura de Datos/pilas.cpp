#include <bits/stdc++.h>

using namespace std;


struct nodo{
  int dato;
  struct nodo *sgte;
};

typedef nodo *tPila;

/*Este Método hace lo mismo que insertarI de listas*/

void push(tPila &Pila, int valor)
{
  tPila q = new(struct nodo);
  q -> dato =  valor;
  q -> sgte = NULL;

  p = aux;
}

/*Este método es lo mismo de eliminarI */

int pop(tPila &Pila) {
  int numero;
  tPila q = Pila;
  numero  = q->dato;
  Pila = q -> sgte;
  delete(q);

  return numero;
}

/*Un simple método que muestra*/
int mostrar(tPila &Pila){
  tPila q = Pila;
  while(q != NULL){
    std::cout << q->dato <<" " ;
    q = q -> sgte;
  }
  cout << std::endl;
}




int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
