#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Exercitiul 1: ";
    cout << 20/10*2+30/15*2 <<endl ; // Calculez operatia
    
    cout << "Exercitiul 2: ";
    cout << 4000/10/10*2+4*10*10/2 <<endl ; // Calculez operatia
    
    cout << "Exercitiul 3: ";
    int ex3; // Declar variabila "ex3"
    cout << "Introdu valoarea lui ex3: ";
    cin >> ex3; // Citesc variabila "ex3"
    cout << "Rezultatul este:" << ex3%10%3 <<endl ; // Calculez rezultatul
    
    cout << "Exercitiul 4: ";
    int a=82, b=24;
    a=a%2+b/2/2;
    b=2*a%2;
    a=a+b;
    b=a%2+b+10%2;
    cout << "a = " << a << " ; ";
    cout << "b = " << b <<endl;

    cout << "Exercitiul 5: ";
    float z;
    cout << "Calculeaza radicalul!" <<endl;
    cout << "Vom calcula radical din z. Introduceti valoarea variabilei z: ";
    cin >> z;
    cout << "Radical din z = " << sqrt(z) <<endl;
    int ex6;
    
    cout << "Exercitiul 6: ";
    cout << "Introduceti valoarea variabilei ex6:";
    cin >> ex6;
    cout << "Ultimele 2 cifre sunt " << ex6%100 <<endl;
    cout << "Suma lor este: " << ex6%100/10+ex6%10 <<endl;
    
    cout << "Exercitiul 7: ";
    float s, p;
    cout << "Introduceti valoarea procentului: ";
    cin >> p;
    cout << "Introduceti valoarea salariului: ";
    cin >> s;
    cout << "Rezultatul este " << (p/100)*s <<endl;
    
    cout << "Exercitiul 8: ";
    float sinit, c1, c2, c3, sfin;
    cout << "Suma initiala = ";
    cin >> sinit;
    cout << "Introduceti pretul cadoului 1: ";
    cin >> c1;
    cout << "Introduceti pretul cadoului 2: ";
    cin >> c2;
    cout << "Introduceti pretul cadoului 3: ";
    cin >> c3;
    sfin = sinit-(c1+c2+c3);
    cout << "Bani ramasi = " << sfin;
    return 0;
}
