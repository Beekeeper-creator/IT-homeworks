#include <bits/stdc++.h>
using namespace std;
int main () {

    int sk1; // 2 pierwsze liczby
    int sk2; // 2 ostatnie liczby
    int a; // cała liczba
    int s; // końcowa suma

    cout << "iveskite a: ";
    cin >> a;
    
    
    sk1 = a / 1000;
    sk2 = a % 100;

    s = sk1 + sk2;

    cout << " Suma = " << s << endl;

    return 0;
   
}

// Gabriel Bortkevic 2D