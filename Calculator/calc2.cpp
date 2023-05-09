#include <iostream>

using namespace std;

int main()
{
	// ASCII TEXT
	cout << "  ,----..               ,--,              " << endl;
	cout << " /   /   \            ,--.'|              " << endl;
	cout << "|   :     :           |  | :              " << endl;
	cout << ".   |  ;. /           :  : '              " << endl;
	cout << ".   ; /--`   ,--.--.  |  ' |      ,---.   " << endl;
	cout << ";   | ;     /       \ '  | |     /     \  " << endl;
	cout << "|   : |    .--.  .-. ||  | :    /    / '  " << endl;
	cout << ".   | '___  \__\/: . .'  : |__ .    ' /   " << endl;
	cout << "'   ; : .'| ,' .--.; ||  | '.'|'   ; :__  " << endl;
	cout << "'   | '/  :/  /  ,.  |;  :    ;'   | '.'| " << endl;
	cout << "|   :    /;  :   .'   \  ,   / |   :    : " << endl;
	cout << " \   \ .' |  ,     .-./---`-'   \   \  /  " << endl;
	cout << "  `---`    `--`---'              `----'   " << endl;
	cout << "   " << endl;
	
	// Declaram variabilele:
    int x,y; // Declaram variabila "x", respectiv "y".
	int suma,diferenta,produsul,imp,rest,ma; // Declaram variabile
	
	// Solicitam valorile lui x, respectiv y.
	cout << "x este " << endl; // Trimitem mesaj "x este ..."
	cin >> x; // Asteptam ca utilizatorul sa introduca valoarea lui x, si o retinem
	cout << "y este "<<endl; // Trimitem mesaj "y este ..."
	cin >> y;// Asteptam ca utilizatorul sa introduca valoarea lui y, si o retinem
	
	// Afisam un display message ;)
	cout << "   "<<endl;
	cout << "Se calculeaza..."<<endl;
	cout << "GATA! Stiu raspunsul!"<<endl;
	cout << "   "<<endl;
	
	// Calculam suma
	suma=x+y; // Ii explicam computerului cum se calculeaza suma
	cout << "Suma = "<<suma<<endl; // Trimitem mesaj "Suma = " si apoi adaugam "<<suma" pentru a arata variabila "suma"
	
	// Calculam diferenta
	// (la fel ca la suma, dar schimbam variabila si semnul de calculare
	diferenta=x-y;
	cout << "Diferenta = "<<diferenta<<endl; // Nu uitam ; de la sfarsit!!
	
	// Calculam produsul
	produsul=x*y; // * inseamna semnul de inmultire
	cout << "Produsul = "<<produsul<<endl;
	
	// Calculam impartirea
	imp=x/y;
	rest=x%y; // Calculam restul impartirii
	cout << "Impartire = "<<imp<<endl;
	cout << "Restul impartirii = "<<rest<<endl; // Afisam restul impartirii
	
	// NOU! MEDIA ARITMETICA
	// Calculam media aritmetica
	ma=(x+y)/2; // Calculam media aritmetica a 2 numere
	cout << "Media aritmetica = "<<ma<<endl; // Afisam media aritmetica a 2 nr
	
    return 0; // Sfarsit
}

