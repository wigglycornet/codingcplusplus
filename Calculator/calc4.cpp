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
    int w,x,y,z;
	int suma,diferenta,produsul,imp,rest,ma; // Declaram variabila "suma"
	
	// Solicitam valorile lui x, respectiv y.
	cout << "w este " << endl; // Trimitem mesaj "w este ..."
	cin >> w; // Asteptam ca utilizatorul sa introduca valoarea lui w, si o retinem
	cout << "x este "<<endl; // Trimitem mesaj "x este ..."
	cin >> x;// Asteptam ca utilizatorul sa introduca valoarea lui x, si o retinem
	cout << "y este " << endl; // Trimitem mesaj "y este ..."
	cin >> y; // Asteptam ca utilizatorul sa introduca valoarea lui y, si o retinem
	cout << "z este "<<endl; // Trimitem mesaj "z este ..."
	cin >> z;// Asteptam ca utilizatorul sa introduca valoarea lui z, si o retinem
	
	// Afisam un display message ;)
	cout << "   "<<endl;
	cout << "Se calculeaza..."<<endl;
	cout << "GATA! Stiu raspunsul!"<<endl;
	cout << "   "<<endl;
	
	// Calculam suma
	suma=w+x+y+z; // Ii explicam computerului cum se calculeaza suma
	cout << "Suma = "<<suma<<endl; // Trimitem mesaj "Suma = " si apoi adaugam "<<suma" pentru a arata variabila "suma"
	
	// Calculam diferenta
	// (la fel ca la suma, dar schimbam variabila si semnul de calculare
	diferenta=w-x-y-z;
	cout << "Diferenta = "<<diferenta<<endl; // Nu uitam ; de la sfarsit!!
	
	// Calculam produsul
	produsul=w*x*y*z; // * inseamna semnul de inmultire
	cout << "Produsul = "<<produsul<<endl;
	
	// Calculam impartirea
	imp=w/x/y/z;
	rest=w%x%y%z; // Calculam restul impartirii
	cout << "Impartire = "<<imp<<endl;
	cout << "Restul impartirii = "<<rest<<endl; // Afisam restul impartirii
	
	// NOU! MEDIA ARITMETICA
	// Calculam media aritmetica
	ma=(w+x+y+z)/4; // Calculam media aritmetica a 4 numere
	cout << "Media aritmetica = "<<ma<<endl; // Afisam media aritmetica a 4 nr
	
    return 0; // Sfarsit
}

