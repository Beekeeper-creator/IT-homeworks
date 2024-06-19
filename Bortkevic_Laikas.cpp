#include <iostream>
using namespace std;
int main () {

    int x; // kintamosisos valandos
    int y; // kintamosios sekundes
    int m; // kiek minučių prabėgo nuo vidurnakčio
    int s; // kiek sekundžių prabėgo nuo vidurnakčio
    
 cout << "Kiek valandu rodo laikrodis: "; 
 cin >> x;
 cout << "Kiek minuciu rodo laikrodis: "; 
 cin >> y;

 m = x * 60 + y;
 cout << "Nuo vidurnakcio prabego " << m << " minuciu" << endl;

 s = m * 60;
 cout << "Nuo vidurnakcio prabego " << s << " sekundziu" << endl;

 return 0;
 
}

// Praca domowa Gabriel Bortkevic 2D ;)