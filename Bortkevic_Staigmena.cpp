#include <bits/stdc++.h>
using namespace std;
int main () {

    float p1, p2, p3, p4, p5; // pažymiai
    float v; // pažymių vidurkis

    cout << "p1= ";
    cin >> p1;
    cout << "p2= ";
    cin >> p2;
    cout << "p3= ";
    cin >> p3;
    cout << "p4= ";
    cin >> p4;
    cout << "p5= ";
    cin >> p5;

    v = ( p1 + p2 + p3 + p4 + p5 ) / 5; // Obliczenie
    cout << "Vidurkis yra: " << v << endl; // To dla siebie, by sprawdzić

    if (v > 9) cout << "Todel mokinys gaus trys saldainius" << endl;
    else if (v >= 7) cout << "Mokinys gaus du saldainius" << endl;
    else cout << "Mokinys gaus viena saldaini" << endl;
   
    return 0;
}

// Gabriel Bortkevic 2D