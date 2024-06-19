#include <iostream>
using namespace std;
int main() {

    int a; // ilgis
    int h; // aukštis
    int s; // sienos plotas
    int ps; // plytelės plotas
    double psk; // plyteliu skaicius

    cout << " Koks yra sienos ilgis: ";
    cin >> a;

    cout << " Koks yra sienos aukstis: ";
    cin >> h;

    s = (a * 100) * (h * 100);
    
    cout << "Sienos plotas - " << s << " kv. cm." << endl;

    ps = 20 * 13;

    cout << "Plyteles plotas - " << ps << " kv. cm." << endl;

    psk = (double) s / ps;

    cout << "Plyteliu skaicius - " << psk << " vnt." << endl;

    return 0;

}

// Praca domowa Gabriel Bortkevic 2D
