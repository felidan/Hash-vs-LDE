#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//#include <vector>
#include <iomanip>
#include "LDE.h"
#include "No.cpp"

#define MAX 10000

#ifndef HASH_H
#define HASH_H

using namespace std;

class Hash{
	private:
		LDE tab[MAX];
		int f_hash(int);
		int histograma[100];
		int max;
	public:
		Hash();
		void isere(int);
		No* busca(int);
		void remove(int);
		void imprimeHash();
		void grafico();
		
};

#endif
