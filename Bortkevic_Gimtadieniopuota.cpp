#include <bits/stdc++.h>
using namespace std;
int main () {

    int v;
    int s;
    int n;
    int k;
    int a;
    int t;

    cout << "v = ";
    cin >> v;
    cout << "s = ";
    cin >> s;
    cout << "n = ";
    cin >> n;
    cout << "a = ";
    cin >> a;

    k = n / (v + s + a);
    t = n % (v + s + a);
    cout << "Kiekvienam atiteks po " << k << " skanestus, tevams liks " << t << " skanestai.";

    return 0;
   
}

// Gabriel Bortkevic 2D