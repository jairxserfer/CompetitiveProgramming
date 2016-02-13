#include <bits/stdc++.h>

using namespace std;

struct nodo{
  int dato;
  struct nodo *sgte;
};
typedef nodo *Tnodo;

/*Inserta un elemento al final de la lista*/
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
/*Inserta un elemento al inicio de la lista*/
void insertarInicio(Tnodo &Lista, int aInsertar){
  Tnodo q = new(struct nodo);
  q -> dato = aInsertar;
  q -> sgte = NULL;
  Lista = q;
}

/*Inserta en una posicion especifica de la Lista*/
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

/*Busca algun dato en la lista y devuelve la posicion*/
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

/*Recorre cada elemento de la lista y lo muestra*/
void  Mostrar(Tnodo Lista) {
  int i = 0;
  while (Lista != NULL) {
    std::cout << i + 1 << " Posicion  encontrada"<< std::endl;
    Lista = Lista -> sgte;
    i++;
  }
}

/*Busca una posicion dada y cambia el dato de esa posición*/
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

/*Elimina al inicio de la Lista*/
void eliminarI(Tnodo &Lista) {
  Tnodo q = Lista;
  Lista = Lista->sgte;
  delete(q);
}

/*Elimina al final de la Lista*/

void eliminarF(Tnodo &Lista) {
  Tnodo p = Lista, t;
  while (p->sgte != NULL) {
     t = p;
     p = p -> sgte;
  }
  delete(p);
  t -> sgte = NULL;
}


/*Elimina en una posicion específica de la Lista*/

void eliminarP(Tnodo &Lista, int posicion) {
  std::cout << "Ingrese la posicion a eliminar" << std::endl;
  if(posicion == 1)
  {
    Tnodo q = Lista;
    Lista = Lista -> sgte;
    delete(q);
  } else{
    int cont = 1;
    Tnodo p = Lista, t;
    while (cont != posicion && posicion-> sgte != NULL) {
      t = p;
      p = p -> sgte;
      cont++;
    }
    if(cont == pos){
      t-> sgte = p -> sgte;
      delete(p);
    }else{
      std::cout << "Posicion no encontrada" << std::endl;
    }
  }

}

int menuI(int op, Tnodo &lista){
  cout << "\t\t\t1. Al Inicio de la Lista\n";
  cout << "\t\t\t2. Al final de la lista\n";
  cout << "\t\t\t3. En una posicion especifica\n";
  cin >> op;
  switch (op) {
    case 1: insertarI(lista);break;
    case 2: insertarF(lista);break;
    case 3: insertarP(lista);break;
  }
}

int menuE(int op, Tnodo &lista){
  cout << "\t\t\t1. Inicio de la Lista\n";
  cout << "\t\t\t2. Final de la lista\n";
  cout << "\t\t\t3. Por posicion especifica\n";
  cin >> op;
  switch (op) {
    case 1:eliminarI(lista);break;
    case 2:eliminarF(lista);break;
    case 3:eliminarP(lista);break;
  }
}



int menu(int op, Tnodo &lista){
  cout << "\t\t1. Insertar Elementos\n";
  cout << "\t\t2. Eliminar Elementos\n";
  cout << "\t\t3. Modificar en una posicion especifica\n";

  cin >> op;
      switch (op) {
      case 1: menuI(op,lista);break;
      case 2: menuE(op,lista);break;
      case 3: Modificar(lista);break;
    }

}

int main(int argc, char const *argv[]) {
  int op = -1;
  Tnodo Lista = NULL;
  while (op != 6) {
    op = menu(op,Lista);
    Mostrar(Lista);
  }
  return 0;
}
