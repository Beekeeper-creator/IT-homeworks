#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, czas;
    float v;
    int k = 0;
    int suma = 0; 
    
    cout << "Kiek pacientu buvo: ";
    cin >> n;
   
    for (int i = 0; i < n; ++i) {
        
        cout << "Kiek " << i + 1 << " pacientas gydytojo kabinete praleido minuciu: ";
        cin >> czas;
        
        suma = suma + czas;
        
        if (czas > 20) {
            k = k + 1;
        }
    }
   
    v = (float)suma / n;
     cout << fixed << setprecision(1);
    cout << "v = " << v <<" , " << "k = " << k << endl;
   

    return 0;
}