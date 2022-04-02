#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
#include <time.h>
#include <cstdlib>


using namespace std;


int max(int[], int);
int min(int[], int);
int somma(int[], int);
float media(int[], float);
float lunghezza_float (float);
void array_rand (int[], int, int, int);
void char_ascii (char);
void ascii_char (int);
void ascii_char_array (int [], int);
bool primo (int);
void print_array (int[], int);
bool pari (int);
void selection_sort(int [], int);
int locate(int [], int, int);




int max(int array [], int n) {
	
	//imposta come massimo il primo numero e poi controlla se i successivi sono maggiori
	//se si li imposta coma massimo
	int max = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

int min(int array [], int n) {
	
	//imposta come minimo il primo numero e poi controlla se i successivi sono maggiori
	//se si li imposta coma minimo
	int min = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

int somma(int array [], int n) {
	
	//imposta la somma a 0 e poi somma volta per volta gli elementi di un arrey
	int somma = 0;
	for (int i = 0; i < n; i++) {
		somma = somma + array[i];
	}
	return somma;
}

float media(int array [], float n) {
	
	//stramite la somma calcola la media dividendola per il numero di elementi dell'arrey della somma
	float media = 0;
	media = somma(array, n) / n;
	return media;
}

float lunghezza_float (float num) {
	
	int decim = 10;
	
	/*
	13,46427527527754768675
				
	13,4642752752
	*/
	
	//tramite il precision scrive il float di lunghezza decim
	cout.precision(decim);
	return num;
}

void array_rand (int array [], int n, int max, int min) {
	
	//tramite la funzione rand dare alle celle di un arrey valore casuale
	
	srand (time (0));
	for (int i = 0; i < n; i++) {
		
		array[i] = min + rand() % (max - min);
	}
}

void char_ascii (char carattere) {
	
	//da un carattere resttiuisce il codice ascii
	//tramite una conversione
	cout << (int) carattere;
}

void ascii_char_array (int ascii) {
	
	//restituire dal codisce ascii il carattere
	//tramite una conversione
	cout << (char) ascii;
}

void ascii_char_array (int array [], int n) {

	//restituire dal codisce ascii il carattere dei valori in un arrey
	//tramite una conversione
	for (int i = 0; i < n; i++) {
		cout << (char)array[i];
	}	
}

bool primo (int n) {
	
	//calcolare se un valore e` primo
	bool primo;
	int ndiv = 0;
	
	for (int i = 1; i <= n; i++) {
		
		if (i % n == 0) {
			
			ndiv++;
		}
	}
	if (ndiv == 2) {
		
		primo = true;
	}
	else {
		
		primo = false;
	}
	return primo;
}

void print_array (int array [], int lung) {
	
	//stampa un vettore
	for (int i = 0; i < lung; i++) {
		cout << array[i] << " ";
	}
}

bool pari (int n) {
	
	bool pari;
	if (n % 2 == 0) {
		pari = true;
	}
	else {
		pari = false;
	}
	return pari;
}

void selection_sort (int array [], int n) {

	int min;
	for (int i = 0; i < n; i++)	{

		min = i;
		for (int x = i + 1; x < n; x++) {

			if (array[x] < array[min]) {

				min = x;
			}
		}	
		swap(array[i], array[min]);
	}
}

int locate (int array [], int dim, int n) {

	selection_sort(array, dim);

	int start, end, mid;
	end = dim - 1;

	for (start = 0; start <= end; start++) {

		mid = (start + end) / 2;
		if (array[mid] == n) {

			return mid;	
		}
		if (array[mid] < n) {

			start = mid + 1;
		}
		else {

			end = mid - 1;
		}
	}
	return -1; //element not found
}


