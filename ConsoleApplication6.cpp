#include<iostream>
using namespace std;

//zad1
/*int a = 20;
int b = 10;

int suma() {
	return a + b;
}
int main() {
	int a = 1;
	int b = 2;

	cout << "Suma wynosi: " << suma() << endl;
}
*/

//zad2
int tab[10];
int rozmiar = 10;

int usun() {
	int pozycja;
	cout << "Podaj pozycje od 0 do 9: ";
	cin >> pozycja;
	for (int i = pozycja; i < rozmiar - 1; i++) {
		tab[i] = tab[i - 1];
	}
	rozmiar--;
}

int main() {
	for (int i = 0; i < rozmiar; i++) {
		cout << "Wpisz wartosci calkowite do tablicy: ";
		cin >> tab[i];
	}

	usun();
	cout << "Tablica po usunieciu wartosci: ";
	for (int i = 0; i < rozmiar; i++) {
		cout << tab[i];
	}
}
