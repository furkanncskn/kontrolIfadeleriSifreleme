#include <iostream>
#include "mesajSifrele.h"
#include "sifreCoz.h"

using namespace std;
unsigned int veri;

void main() {


	mesajSifrele gonderilenMesaj1(1996);

	sifreCoz gelenMesaj1(gonderilenMesaj1.getDorduncuBasamak(), gonderilenMesaj1.getUcuncuBasamak(), 
		                gonderilenMesaj1.getIkinciBasamak(), gonderilenMesaj1.getBirinciBasamak());

	cout << "\nSifrelemek istediginiz veriyi giriniz: "; cin >> veri;
	mesajSifrele gonderilenMesaj2(veri);
	sifreCoz gelenMesaj2(gonderilenMesaj2.getDorduncuBasamak(), gonderilenMesaj2.getUcuncuBasamak(),
		gonderilenMesaj2.getIkinciBasamak(), gonderilenMesaj2.getBirinciBasamak());

}