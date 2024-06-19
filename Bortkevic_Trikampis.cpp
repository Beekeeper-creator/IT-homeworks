#include <bits/stdc++.h>
using namespace std;
int main (){

    double a;
    double b;
    double c;
    double S;
    double P;
    double p;

    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

    cout << "c= ";
    cin >> c;

    P = a + b + c;

    p = (a + b + c) / 2;

    S = sqrt (p*(p-a)*(p-b)*(p-c));

    cout << fixed << setprecision (2);
    cout << "S = " << setw(5) << S << " kv. vnt., " << "P = " << setw(5) << P << " vnt." << endl;
    return 0;

}

// Praca domowa Gabriel Bortkevic 2D