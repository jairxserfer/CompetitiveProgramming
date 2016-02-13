#include <bits/stdc++.h>

using namespace std;

struct nodo{
  int dato;
  struct nodo *sgte;
};
typedef nodo *Tnodo;

//Crea un vector Dinámico y lo llena con los valores de la estructura
vector<int> cambioG(Tnodo Lista)
{
  vector<int> v;
  while(Lista != NULL)
  {
    v.push_back(Lista -> dato);
    //cout << Lista -> dato << " ";
    Lista = Lista -> sgte;
  }
  return v;
}

void InsertarE(Tnodo &Lista, int numero)
{
  Tnodo t, q = new(struct nodo);
  q -> dato = numero;
  q -> sgte = NULL;
  if(Lista ==  NULL)
  {
    Lista = q;
  }
  else
  {
    t = Lista;
    while (t -> sgte != NULL)
    {
      t = t -> sgte;
    }
    t ->sgte = q;
  }
}

void cambioG2(vector<int> mv, Tnodo &Lista)
{
  Tnodo q = Lista;
  int k = mv.size();

  for (size_t i = 0; i < mv.size(); i++) {
    q -> dato = mv[i];
    q = q -> sgte;
  }
}

vector<int> shellsort(Tnodo &Lista)
{
  int gap, i,j, temp;
  vector<int> mv = cambioG(Lista);
  int n = mv.size();
  for(gap = n/2; gap > 0; gap /= 2){
    for(i = gap; i < n; i++){

      for(j = i-gap; j>=0 && mv[j] >mv[j+gap]; j -= gap ){
         temp = mv[j];
         mv[j] = mv[j+gap];
         mv[j+gap] = temp;
      }
    }
  }
  return mv;
}

void mostrar(Tnodo Lista) {

  while (Lista != NULL)
  {
    cout << Lista -> dato << " ";
    Lista = Lista -> sgte;
  }
  cout << "\n";
}

int main(int argc, char const *argv[]) {
  Tnodo Lista=NULL;
  int val,a;
  cout<<"\n--------ORDENAMIENTO-------";
  cout<<"\nIngrese el numero de datos a ordenar: ";
  cin>>val;
  for(int i=0;i<=val;i++){
		a=rand() %100;
		InsertarE(Lista,a);
	}
  mostrar(Lista);
  vector<int> mv = shellsort(Lista);
  cambioG2(mv,Lista);
  mostrar(Lista);
  return 0;
}
