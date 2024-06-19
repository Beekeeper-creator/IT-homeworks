#include <iostream>
using namespace std;

int main() {
    int n, kiek, b, min, tmin = 0, kart;

    cout << "kiek yra etapu: ";
    cin >> n;
    cout << "kiek kartu buvo pataikyta i taikini: ";
    cin >> kiek;
    cout << "baudos minutes: ";
    cin >> b;

    for (int i = 0; i < n; ++i) {
        cout << "t" << i + 1 << " = ";
        cin >> min;
        cout << "k" << i + 1 << " = ";
        cin >> kart;
        
        if (kart < kiek) {
            tmin = tmin + min + (kiek - kart) * b;
        } else {
            tmin = tmin + min;
        }
    }

    cout << "Varzybu trasa dalyvis iveike per " << tmin << " minutes." << endl;
        
    return 0;
}