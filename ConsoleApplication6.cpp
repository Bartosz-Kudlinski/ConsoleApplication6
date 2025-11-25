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
/*int tab[10];
int rozmiar = 10;

void usun() {
	int pozycja;
	cout << "Podaj pozycje od 0 do 9: ";
	cin >> pozycja;
	for (int i = pozycja; i < rozmiar - 1; i++) {
		tab[i] = tab[i + 1];
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
	return 0;
}
*/

//zad3
float TEMP1[10];
float TEMP2[10];
int INDEKS = 0;

float przelicz(float tempC) {
    return tempC + 273.15f;
}

void zapisz(float tempPodana, float tempPrzeliczona) {
    if (INDEKS < 10) {
        TEMP1[INDEKS] = tempPodana;
        TEMP2[INDEKS] = tempPrzeliczona;
        INDEKS++;
    }
    else {
        cout << "Koniec miejsca w tablicy, przeliczenie nie zostanie zapisane" << endl;
    }
}

void wyswietl() {
    cout << "Zapisane temperatury:" << endl;
    for (int i = 0; i < INDEKS; i++) {
        cout << i << ": " << TEMP1[i] << " C -> " << TEMP2[i] << " K" << endl;
    }
}

int main() {
    int ile;
    cout << "Ile temperatur chcesz podac (max 10)? ";
    cin >> ile;

    for (int i = 0; i < ile; i++) {
        float tC;
        cout << "Podaj temperature w C: ";
        cin >> tC;

        float tK = przelicz(tC);
        zapisz(tC, tK);
    }

    wyswietl();

    return 0;
}
