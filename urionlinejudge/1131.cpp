#include <bits/stdc++.h>

using namespace std;

int progrm(){
	int x, y;
	cin>>x>>y;
	if(x>y){
		return -1;
	}
	if(x==y){
		return -2;
	}
	if(x<y){
		return -3;
	}
}

int main(){
	int op=1;
	int val=0;
	int inter=0, empates=0, gremio=0, cont=0;
	do{
		if(op==1){
			val=progrm();
			if(val==-1){
				inter++;
			}
			if(val==-2){
				empates++;
			}
			if(val==-3){
				gremio++;
			}
			
			cont++;
		}
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>op;
	}while(op!=2);
	cout<<cont<<" grenais\n";
	cout<<"Inter:"<<inter<<endl;
	cout<<"Gremio:"<<gremio<<endl;
	cout<<"Empates:"<<empates<<endl;
	if(inter>gremio){
		cout<<"Inter venceu mais\n";	
		
	}	
	if(gremio>inter){
		cout<<"Gremio venceu mais\n";
	}
	if(gremio==inter){
		cout<<"Nao houve vencedor\n";
	}
	return 0;
}
