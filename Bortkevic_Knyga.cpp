#include <iostream>
using namespace std;
int main() {
    
    int m, k, s, d;
    

    cout << "m = ";
    cin >> m;

    

    d = 0;
    k = 0;
    while (m > 0) {
    
    k = k + 1;
    m = m - k;
    d = d + 1;
    }
    
    s = abs(m % d);

    cout <<  d << endl;
   
    cout <<  s << endl;
    return 0;
}