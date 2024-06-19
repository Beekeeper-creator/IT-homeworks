#include <bits/stdc++.h>
using namespace std;
int main (){

    double p1, p2, p3, s, a, b, c;
    int m;

    cout << "m= ";
    cin >> m;
    cout << "p1= ";
    cin >> p1;
    cout << "p2= ";
    cin >> p2;
    cout << "p3= ";
    cin >> p3;

    a = 1 * p1 * m;
    b = 4 * p2 * m;
    c = 2 * p3 * m;

    if(a < b && a < c) cout << "Mokytojai labiausiai apsimoka pirkti pirmojo gamintojo sokolada. \n Ji tures sumoketi " << a <<" Eur. " << endl;
    else if (b < c) cout <<"Mokytojai labiausiai apsimoka pirkti antrojo gamintojo sokolada. \n Ji tures sumoketi " << b <<" Eur." << endl;
    else cout << "Mokytojai labiausiai apsimoka treciojo gamintojo sokolada. \n Ji tures sumoketi " << c << " Eur." << endl;

    return 0;

}

// Praca domowa Gabriel Bortkevic 2D