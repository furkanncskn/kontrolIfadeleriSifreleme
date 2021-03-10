#include <iostream>
#include "mesajSifrele.h"

using namespace std;


mesajSifrele::mesajSifrele(unsigned int mesaj) {
	cout << "----------------------SIFRELEME UYGULAMASI--------------------" << endl;
	cout << "Gonderilen mesaj: " << mesaj << endl;
	setBirinciBasamak(mesaj);
	setIkinciBasamak(mesaj);
	setUcuncuBasamak(mesaj);
	setDorduncuBasamak(mesaj);
	sifrele();
	printMesajSifrele();
}

mesajSifrele::~mesajSifrele() {
	cout << this << "Destructor is called!" << endl;
}

void mesajSifrele::setBirinciBasamak(unsigned int mesaj) {
	birinciBasamak = mesaj % 10;
}

void mesajSifrele::setIkinciBasamak(unsigned int mesaj) {
	ikinciBasamak = (mesaj / 10) % 10;
}

void mesajSifrele::setUcuncuBasamak(unsigned int mesaj) {
	ucuncuBasamak = (mesaj / 100) % 10;
}

void mesajSifrele::setDorduncuBasamak(unsigned int mesaj) {
	dorduncuBasamak = mesaj / 1000;
}

double mesajSifrele::getBirinciBasamak() const {
	return birinciBasamak;
}

double mesajSifrele::getIkinciBasamak() const {
	return ikinciBasamak;
}

double mesajSifrele::getUcuncuBasamak() const {
	return ucuncuBasamak;
}

double mesajSifrele::getDorduncuBasamak() const {
	return dorduncuBasamak;
}

void mesajSifrele::sifrele() {
	double temp = birinciBasamak;
	birinciBasamak = ucuncuBasamak;
	ucuncuBasamak = temp;

	temp = ikinciBasamak;
	ikinciBasamak = dorduncuBasamak;
	dorduncuBasamak = temp;

	birinciBasamak = (birinciBasamak + 7) / 10;
	ikinciBasamak = (ikinciBasamak + 7) / 10;
	ucuncuBasamak = (ucuncuBasamak + 7) / 10;
	dorduncuBasamak = (dorduncuBasamak + 7) / 10;
}

void mesajSifrele::printMesajSifrele() {
	cout << "Sifrelenmis Mesaj: "
		<< "\nBirinci Basamak: " << getBirinciBasamak()
		<< "\nIkinci Basamak: " << getIkinciBasamak()
		<< "\nUcuncu Basamak: " << getUcuncuBasamak()
		<< "\nDorduncu Basamak: " << getDorduncuBasamak() << endl;
}