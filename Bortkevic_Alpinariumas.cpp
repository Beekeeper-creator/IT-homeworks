#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;
int main () {

    double S;
    double a;
    double d;
    double r;

    cout << "iveskite alpinariumo krastines ilgi a = ";
    cin >> a;

    cout << "iveskite fontano skersmmeni d = ";
    cin >> d;

    r = d/2;

    S = ((pow (a, 2)) - (PI * pow(r, 2))) / 2;

    cout << fixed << setprecision (4);
    cout << "Raudonu akmenuku plotas:" << setw(8) << S << endl;

    return 0;
}

// Gabriel Bortkevic 2D