#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string word;
int wybor, shift; 

string encode(string word, int shift) {
	for(int i=0; i < word.length(); i++) {
		word[i] += shift; 
	}
	
	return word;
}

string decode(string word, int shift) {
	for(int i=0; i < word.length(); i++) {
		word[i] -= shift; 
	}
	return word;
}

int main() {
	for (;;) {
	system("cls");
	cout << "Aby odszyfrowac, kliknij 1" << endl;
	cout << "Aby zaszyfrowac, kliknij 2" << endl;
	cout << "Co wybierasz: ";
	cin >> wybor;
	
	if (wybor == 1) {
		system("cls");
		cout << "Podaj fraze: ";
		cin.ignore();
		getline(cin, word);
		cout << "Haslo szyfru: ";
		cin >> shift;
		cout << encode(word, shift);
		system("pause >nul"); 
	}
	
	else if(wybor == 2) {
		system("cls");
		cout << "Podaj fraze: ";
		cin.ignore();
		getline(cin, word);
		cout << "Haslo szyfru: ";
		cin >> shift;
		cout << decode(word, shift);
		system("pause >nul"); 
		}
	}
	return 0;
}
