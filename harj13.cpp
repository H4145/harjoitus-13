/*
Eetu Salo

Harjoitus 13 (Palautus vko 44)
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi nayt�lle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehd�ksesi merkkijonojen yhdist�misen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka



*/


#include <iostream>
using namespace std;
#include <cstring>
void main()
{
	char etunimi[50];
	char sukunimi[50];

	cout << "\nAnna etunimesi: ";
	cin.getline(etunimi, 50);
	cout << "\nAnna sukunimesi: ";
	cin.getline(sukunimi, 50);

	strcat_s(etunimi, " ");
	strcat_s(etunimi, sukunimi);
	cout << "Nimesi oli " << etunimi << endl;
}