#pragma once
#include <iostream>

class sifreCoz {
private:
	unsigned int cozulenMesaj;
	double gelenBirinciBasamak;
	double gelenIkinciBasamak;
	double gelenUcuncuBasamak;
	double gelenDorduncuBasamak;
public:
	sifreCoz(double, double, double, double);
	~sifreCoz();
	void setBirinciBasamak(double);
	void setIkinciBasamak(double);
	void setUcuncuBasamak(double);
	void setDorduncuBasamak(double);
	double getBirinciBasamak() const;
	double getIkinciBasamak() const;
	double getUcuncuBasamak() const;
	double getDorduncuBasamak() const;
	void cozSifre();
	void printMesajSifrele();
};
