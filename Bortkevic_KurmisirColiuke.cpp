#include <bits/stdc++.h>
#define ROK 365.25
using namespace std;
int main () {

    double g;
    double m;
    double n;
    double zjad_zycie;
    double moze_pozwolic;
        

    cout << "g= ";
    cin >> g;
    cout << "m= ";
    cin >> m;
    cout << "n= ";
    cin >> n;
    
    
    zjad_zycie = m * ROK * 0.5 / 1000 * g;
    moze_pozwolic = n * 1000;
    

    if (zjad_zycie <= moze_pozwolic) cout << " Kurmiui vesti Coliuke apsimoka " << endl;
    else cout << " Kurmiui vesti Coliuke neapsimoka " << endl;

    return 0;
   }

// Gabriel Bortkevic 2D