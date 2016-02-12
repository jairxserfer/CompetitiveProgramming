#include <bits/stdc++.h>

using namespace std;

struct nodo{
  int dato;
  struct nodo *sgte;
};
typedef nodo *Tnodo;


void insertarFinal(Tnodo &Lista, int aInsertar){
  Tnodo q  = new(struct nodo) , m;
  q -> dato = aInsertar;
  q -> sgte = NULL;
  m = Lista;
  if(Lista == NULL){
    Lista = q;
  } else{
    m = Lista;
    while(m-> sgte != NULL){
      m = m->sgte;
    }
    m->sgte = q;
  }

}

void insertarInicio(Tnodo &Lista, int aInsertar){
  Tnodo q = new(struct nodo);
  q -> dato = aInsertar;
  q -> sgte = NULL;
  Lista = q;
}

void insertarPosicio(Tnodo &Lista, int aInsertar, int posicion){
  Tnodo q = new(struct nodo);
  q -> dato = aInsertar;
  q -> sgte = NULL;
  if(posicion == 1){
    insertarInicio(Lista, aInsertar);
  } else{
    int cont = 1;
    Tnodo p, t;
    p = Lista;
    while (cont != posicion && p->sgte != NULL) {
      t  = p;
      p = p -> sgte;
      cont++;
    }
    if( cont == posicion )
    {
      q-> sgte = p;
      t -> sgte = q;
    } else {
      std::cout << "Posicion Ingresada incorrecta" << std::endl;
    }
  }
}

void busqueda(Tnodo Lista, int valorB){
  Tnodo q = Lista;
  int i = 1, band = 0;
  while(q != NULL)
  {
    if( q -> nro == valorB)
    {
      cout << endl << "Posicion: " << i << "\n";
      band = 1;
    }
    q = q -> sgte;
    i++;
  }

  if(band == 0)
    cout << "\n\n numero no encontrado \n\n";
}

void  Mostrar(Tnodo Lista) {
  int i = 0;
  while (Lista != NULL) {
    std::cout << i + 1 << " Posicion  encontrada"<< std::endl;
    Lista = Lista -> sgte;
    i++;
  }
}

void Modificar(Tnodo &Lista, int valor, int posicion) {
  Tnodo p = Lista;
  int cont = 1;
  while (cont != posicion && p -> sgte != NULL) {
    p = p -> sgte;
    cont++;
  }
  if(cont == posicion)
  {
    p -> dato = valor;
  } else{
    cout << "Posicion no encontra\n";
  }
}

void eliminarI(Tnodo &Lista) {
  Tnodo q = Lista;
  Lista = Lista->sgte;
  delete(q);
}

void eliminarF(Tnodo &Lista) {
  Tnodo p = Lista, t;
  while (p->sgte != NULL) {
     t = p;
     p = p -> sgte;
  }
  delete(p);
  t -> sgte = NULL;
}

void eliminarP(Tnodo &Lista, int posicion) {
  /* code */
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
