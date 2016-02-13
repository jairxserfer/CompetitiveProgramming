#include <bits/stdc++.h>

using namespace std;

struct nodo{
  int dato;
  struct nodo *sgte;
}
typedef nodo *Tcolas;

/*Al contrario de las listas
  este algoritmo usa el insertar al final,
  y eliminar al inicio
*/

//Ingresar algun elemento a la cola
void encolar(Tnodo &Tcolas, int aInsertar)
{
  Tnodo q = new(struct nodo), m;
  q -> dato = aInsertar;
  q -> sgte = NULL;

}



int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
