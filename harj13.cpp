/*
Eetu Salo

Harjoitus 13 (Palautus vko 44)
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

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