#include <bits/stdc++.h>
using namespace std;


int main() {

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<bool> painted(101);
    for (int i = a; i < b; i++) { painted[i] = true; }
    for (int i = c; i < d; i++) { painted[i] = true; }

    int total = 0;
    for (bool i : painted) { 
        total += i;
     }

    cout << total << endl;
}