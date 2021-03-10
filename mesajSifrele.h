#pragma once
#include <iostream>

class mesajSifrele {
private:
	unsigned int mesaj;
	double birinciBasamak;
	double ikinciBasamak;
	double ucuncuBasamak;
	double dorduncuBasamak;
public:
	mesajSifrele(unsigned int);
	~mesajSifrele();
	void setBirinciBasamak(unsigned int);
	void setIkinciBasamak(unsigned int);
	void setUcuncuBasamak(unsigned int);
	void setDorduncuBasamak(unsigned int);
	double getBirinciBasamak() const;
	double getIkinciBasamak() const;
	double getUcuncuBasamak() const;
	double getDorduncuBasamak() const;
	void sifrele();
	void printMesajSifrele();
};
