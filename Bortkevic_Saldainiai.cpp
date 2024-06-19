#include <iostream>
using namespace std;

int main() {
    
    int k, d, kp, n;

    cout << "kp = ";
    cin >> kp;
    cout << "d = ";
    cin >> d;
    cout << "n = ";
    cin >> n;

    k = 0;


    for (int i = 1; i <= n; i++)
    {
    
        k = k + kp;
        kp = kp + d;

    }

    cout << "Paskutiniaja diena suvalge " << k << " saldainius." << endl;
    return 0;
}