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
void encolar(Tcolas &Colas, int aInsertar)
{
  Tnodo q = new(struct nodo), m;
  q -> dato = aInsertar;
  q -> sgte = NULL;
  if(Colas == NULL)
  {
    Colas = q;
  } else
  {
    m = Colas;
    while (m -> sgte != NULL)
    {
      m = m -> sgte;
    }
    m -> sgte = q;
  }
}

//Eliminar (hacer correr) a algun elemneto de la cola
void desencolar(Tcolas &Cola, int aInsertar)
{
  Tcolas q = Cola;
  Cola = Cola->sgte;
  delete(q);
}

//Solo muestra lo que hay en la cola

void mostrar(Tcolas Cola) {
  int i = 1;
  while(Cola != NULL)
  {
    cout << "El elemento: " << i <<" es "<< Cola-> dato <<"\n";
    Cola = Cola -> sgte;
    i++;
  }
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
