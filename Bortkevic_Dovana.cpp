#include <bits/stdc++.h>
using namespace std;
int main (){

    double dovana;
    double benzas;
    double likutis;
    double alga;
    

    cout << "Kiek euru isleido dovanai: ";
    cin >> dovana;

    cout << "Kiek litru benzinu uzsipile: ";
    cin >> benzas;
    
    likutis = 1750.70;

    alga = dovana + (benzas * 1.75) + likutis;

    cout << fixed << setprecision (2);
    cout << "Jono atlyginimas " << setw(8) << alga << " EUR" << endl;
    
    
    return 0;


}

// Praca domowa Gabriel Bortkevic 2D