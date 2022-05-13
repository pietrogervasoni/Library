#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
#include <time.h>
#include <cstdlib>
#include <string.h>


using namespace std;


int max(int[], int);
int min(int[], int);
int sum(int[], int);
float average(int[], float);
float lunghezza_float(float);
void array_rand (int[], int, int, int);
void char_ascii (char);
void ascii_char (int);
void ascii_char_array (int[], int);
bool prime (int);
void print_array (int[], int);
bool even (int);
void selection_sort(int[], int);
int locate(int[], int, int);
void toupper_string(char[]);
void tolower_string(char[]);
string toBinary(int);




int max(int array [], int n) {
	
	//set the number as the maximum and then check if the next ones are greater if you set them as maximum
	int max = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

int min(int array [], int n) {
	
	//set at least the first number and then check if the next ones are greater if you set them as a minimum
	int min = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

int sum(int array [], int n) {
	
	//set the sum to 0 and then sum the elements of an array from time to time
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + array[i];
	}
	return sum;
}

float average(int array [], float n) {
	
	//through the sum calculates the average by dividing it by the number of elements of the sum array
	float average = 0;
	average = sum(array, n) / n;
	return average;
}

float lunghezza_float (float num) {
	
	int decim = 10;
	
	/*
	13,46427527527754768675
				
	13,4642752752
	*/
	
	//through precision writes the float of length decim
	cout.precision(decim);
	return num;
}

void array_rand (int array [], int n, int max, int min) {
	
	//using the rand function to give the cells of an arrey random value
	srand (time (0));
	for (int i = 0; i < n; i++) {
		
		array[i] = min + rand() % (max - min);
	}
}

void char_ascii (char carattere) {
	
	//from a character returns the ascii code through a conversion
	cout << (int) carattere;
}

void ascii_char (int ascii) {
	
	//return the character from the ascii encoding through a conversion
	cout << (char) ascii;
}

void ascii_char_array (int array [], int n) {

	//return from the ascii encoding the character of the values in an arrey through a conversion
	for (int i = 0; i < n; i++) {
		cout << (char)array[i];
	}	
}

bool prime (int n) {
	
	//calculate if a value is prime
	bool prime;
	int ndiv = 0;
	
	for (int i = 1; i <= n; i++) {
		
		if (i % n == 0) {
			
			ndiv++;
		}
	}
	if (ndiv == 2) {
		
		prime = true;
	}
	else {
		
		prime = false;
	}
	return prime;
}

void print_array (int array [], int lung) {
	
	//print an array
	for (int i = 0; i < lung; i++) {
		cout << array[i] << " ";
	}
}

bool even (int n) {
	
	//check if the number is even or not
	bool even;
	if (n % 2 == 0) {
		even = true;
	}
	else {
		even = false;
	}
	return even;
}

void selection_sort (int array [], int n) {

	//implementation of selection sort algoritm
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

	//implementation of binary search 
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

void toupper_string(char testo[]) {

	//convert a lowercase string to uppercase
	for (int i = 0; testo[i] != '\0'; i++) {

		testo[i] = toupper(testo[i]);
	}
}

void tolower_string(char testo[]) {

	//convert an uppercase string to lowercase
	for (int i = 0; testo[i] != '\0'; i++) {

		testo[i] = tolower(testo[i]);
	}
}

string toBinary(int n) {

	//converts an int to its binary correspondent and return it as a string
	string r;
	while (n != 0) {
		r = (n % 2 == 0 ? "0" : "1") + r;
		n /= 2;
	}
	return r;
}