#include <iostream>
using namespace std;
int main() {
    int x1, x2, suma, a, b, c;

    cout << "Iveskite intervalo pradzia: ";
    cin >> x1;
    cout << "Iveskite intervalo pabaiga: ";
    cin >> x2;

    for (int i = x1; i <= x2; i++) {
        
        a = i / 100;  // pierwsza liczba      
        b = (i / 10) % 10;  // druga liczba
        c = i % 10;   // pierwsza liczba     
        suma = a + b + c;   // obliczenie sumy

        cout << i << " ";

        if (suma <= 5) {
            cout << "Nenusimink" << endl;
        } else if (suma <= 8) {
            cout << "Pasistenk" << endl;
        } else {
            cout << "Pergale" << endl;
        }
        
    }

    return 0;
}
