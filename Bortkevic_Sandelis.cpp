#include <bits/stdc++.h>
using namespace std;
int main () {

    double n;
    double m; 
    double k; 

    cout << "n= ";
    cin >> n;
    cout << "m= ";
    cin >> m;

    k= n/m;
    if (k - (int)k == 0) {
        cout << "Vairuotojas i parduotuve vaziuos " << k << " Kartu" << endl;
    } else {
        cout << "Vairuotojas i parduotuve vaziuos " << (int)k + 1 << " Kartu" << endl;
    }
    
    return 0;
}

// Gabriel Bortkevic 2D