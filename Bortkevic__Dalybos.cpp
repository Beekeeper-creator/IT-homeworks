#include <bits/stdc++.h>
using namespace std;
int main () {

    int k;
    int n;
    int m;
    int kiek;
    int likutis;
    int obuoliai;

    cout << " kiek mokytoja i klase atnese obuoliu: ";
    cin >> n;

    cout << " kiek mokyniai i klase atnese obuoliu: ";
    cin >> k;

    cout << " kiek klaseje mokosi mokiniu: ";
    cin >> m;

    obuoliai = n + k * m;

    kiek = obuoliai / (m + 1);
    likutis = obuoliai % (m + 1);
    cout << "Kiekvienam sventes dalyviui teko po " << kiek << " obuolius." << endl;
    cout << "Kitai dienai liko " << likutis << " obuoliai." << endl;
    return 0;
   
}

// Gabriel Bortkevic 2D