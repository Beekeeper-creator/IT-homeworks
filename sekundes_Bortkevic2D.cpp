#include <bits/stdc++.h>
using namespace std;
int main () {

    int s; // kiek nuo paros pradžios praėjo sekundžių
    int v; // kiek sveikų valandų sudaro
    int min; // kiek sveikų minučių sudaro
    int ls; // sekundziu likutis

    cout << "Iveskite sekundes: ";
    cin >> s;

    v = s / 3600;
    ls = s % 3600;
    min = ls / 60;

    cout << v << " val. " << min << " min." << endl;

    return 0;
   
}

// Gabriel Bortkevic 2D
