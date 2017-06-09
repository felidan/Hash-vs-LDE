#include "Hash.h"

int Hash::f_hash(int num){
	return num % MAX;
	}
Hash::Hash(){
	for(int i=0; i<100; i++)
	    histograma[i] = 0;

	max = 0;
	}
	

void Hash::isere(int num){
	int indice;
	tab[f_hash(num)].isereLDE(num);
	
	indice =(int)( f_hash(num) * 0.01);

	histograma[indice] ++;
	
	if(histograma[indice] >= max)
	    max = histograma[indice];
	}
	
No* Hash::busca(int num){
	return tab[f_hash(num)].buscaLDE(num);
	}

void Hash::remove(int num){
	tab[f_hash(num)].removeLDE(num);
	}
	
void Hash::imprimeHash(){
	for(int i=0; i<MAX; i++){
		tab[i].imprime();
		}
	}

void Hash::grafico(){
	int aux;
	for(int i=0; i<100; i++){

	aux = (histograma[i] * 70) / max;
	cout<<setw(5)<<histograma[i]<<" ";
	for(int j=0; j<aux; j++)
		cout<<"*";

	cout<<endl;
		}
	}
