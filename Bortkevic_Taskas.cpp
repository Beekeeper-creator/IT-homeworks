#include <iostream>
using namespace std;

int main() {
    
    double x1; // koordinates
    double y1; // koordinates
    double x2; // koordinates
    double y2; // koordinates
    double x; // Atkarpos AB vidurio tasko C koordinates
    double y; // Atkarpos AB vidurio tasko C koordinates

    cout << "x1= ";
    cin >> x1;

    cout << "y1= ";
    cin >> y1;

    cout << "x2= ";
    cin >> x2;

    cout << "y2= ";
    cin >> y2;

    x = ( x1 + x2 ) / 2;

    y = ( y1 + y2 ) / 2;

    cout << "Atkarpos AB vidurio tasko C koordinates: " << " x = " << x << " y = " << y << endl;
 
    return 0;
}

// Praca domowa Gabriel Bortkevic 2D