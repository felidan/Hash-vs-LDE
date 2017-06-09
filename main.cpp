#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "No.cpp"
#include "Hash.h"
#include "LDE.h"
using namespace std;


int main (){
	Hash tabela;
	LDE tab;
	
	FILE * arquivo;
	int numero;
	
	clock_t t_1, t_2;
	
	
    cout<<"--LDE--"<<endl<<endl;
	arquivo = fopen("numeros.txt", "r");

	t_1 = clock();

	if(arquivo){
		while(!feof(arquivo)){
			fscanf(arquivo, "%d", &numero);
			tab.isereLDE(numero);
		}	
	}
	fclose(arquivo);

	//tab.imprime();
	
	t_1 = clock() - t_1;
	printf("Fim alocacao (mili):.....%.10f\n\n", (((double)t_1)/CLOCKS_PER_SEC) );
    
    
    t_1 = clock();
    
	cout<<"Buscando os numeros: 1797, 5853 e 9725..."<<endl;
	
	No* aux1 = tab.buscaLDE(1797);
	No* aux2 = tab.buscaLDE(5853);
	No* aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(9725);
	aux3 = tab.buscaLDE(10000);
	
	if(aux1) cout<<"Numero encontrado: "<<aux1->numero<<endl;
	else cout<<"Erro!"<<endl;
	
	if(aux2) cout<<"Numero encontrado: "<<aux2->numero<<endl;
	else cout<<"Erro!"<<endl;
	
	if(aux3) cout<<"Numero encontrado: "<<aux3->numero<<endl;
	else cout<<"Erro!"<<endl;
	
	t_1 = clock() - t_1;

    printf("Fim busca (mili):........%.10f\n", (((double)t_1)/CLOCKS_PER_SEC) );
	
	cout<<"\n----------------------"<<endl;
	
	
	
	cout<<"--Tabela Hash--"<<endl<<endl;
	arquivo = fopen("numeros.txt", "r");
	
    t_1 = clock();
	
	if(arquivo){
		while(!feof(arquivo)){
			fscanf(arquivo, "%d", &numero);
			tabela.isere(numero);
			}
		}
	fclose(arquivo);

    t_1 = clock() - t_1;

    printf("Fim alocacao (mili):.....%.10f\n", (((double)t_1)/CLOCKS_PER_SEC) );

    t_1 = clock();
	
	cout<<"\nBuscando os numeros: 1797, 5853 e 9725..."<<endl;
	No* aux4 = tabela.busca(1797);
	No* aux5 = tabela.busca(5853);
	No* aux6 = tabela.busca(9725);
	aux6 = tab.buscaLDE(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(9725);
	aux6 = tabela.busca(10000);
	
	if(aux4) cout<<"Numero encontrado: "<<aux4->numero<<endl;
	else cout<<"Erro!"<<endl;
	
	if(aux5) cout<<"Numero encontrado: "<<aux5->numero<<endl;
	else cout<<"Erro!"<<endl;
	
	if(aux6) cout<<"Numero encontrado: "<<aux6->numero<<endl;
	else cout<<"Erro!"<<endl;

	t_1 = clock() - t_1;

	printf("Fim busca (mili):........%.10f\n", (((double)t_1)/CLOCKS_PER_SEC) );
	
	cout<<"\n----------------------"<<endl;
	
	tabela.grafico();
	//tabela.imprimeHash();
	
	cout<<endl;
	
	system ("pause");
	return 0;
}

