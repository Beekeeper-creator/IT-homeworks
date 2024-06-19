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

    if(a < b && a < c) {
        s = a;
        cout << fixed << setprecision (2);
        cout << "Mokytojai labiausiai apsimoka pirkti pirmojo gamintojo sokolada. " << endl;
        cout << "Ji tures sumoketi " << setw(4) << s << " Eur." << endl;
    }
    else if (b < c){
        s = b;
        cout << fixed << setprecision (2);
        cout << "Mokytojai labiausiai apsimoka pirkti antrojo gamintojo sokolada. " << endl;
        cout << "Ji tures sumoketi " << setw(4) << s << " Eur." << endl;
    }
    else{
        s = c;
        cout << fixed << setprecision (2);
        cout << "Mokytojai labiausiai apsimoka treciojo gamintojo sokolada. " << endl;
        cout << "Ji tures sumoketi " << setw(4) << s << " Eur." << endl;
    }

    return 0;
    
}

// Praca domowa Gabriel Bortkevic 2D