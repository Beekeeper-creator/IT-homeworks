#include <iostream>
#include <iomanip>

#define PI 3.14159
using namespace std;
int main (){
    double r;
    double a;
    double s;
    

    cout << "r = ";
    cin >> r;

    cout << "s = ";
    cin >> s;

    a = (360*s) / (PI*(r*r));
    cout << fixed << setprecision (0);
    cout << "Kampas tarp teritorijos atkarpu " << setw (3) << a << " laipsniu ";

 return 0;

}

// Praca domowa Gabriel Bortkevic 2D