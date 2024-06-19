#include <iostream>
using namespace std;
int main() {
    int s; // Tilto ilgis (metrais)
    double v; // Dviratininko greitis (km/h)
    double v_m; // Dviratininko greitis (m/s)20
    double t; // Laikas (sekundėmis)

    cout << "Dviratininko greitis: ";
    cin >> v;

    s = 62; // Tilto ilgis metrais
    v_m = v * 1000.0 / 3600.0; // Konvertuojame greitį iš km/h į m/s

    t = s / v_m;
    cout << "Dviratininkas tilta pervaziuos per " << t << " sekundes" << endl;

    return 0;
}

// Made by Gabriel Bortkevic 2D