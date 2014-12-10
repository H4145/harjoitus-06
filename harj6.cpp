/*
Eetu Salo

Harjoitus 6 (palautus vko 40)
Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.


*/


#include <iostream>
using namespace std;
void main()
{
	int Luku;
	int Hinta;
	cout << "Kuinka paljon sinulla on rahaa?\n";
	cin >> Luku;
	cout << "\nMik‰ on lihapiirakan hinta?\n";
	cin >> Hinta;
	if (Luku >= Hinta)
		cout << "Rahaa jaljella: " << endl;
	else cout << "\nPaastoa! Ole Hyv‰!";
}
