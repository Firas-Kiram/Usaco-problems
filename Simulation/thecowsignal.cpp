#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int n, m, k;

    vector<string> s;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        string y{};
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            for (int x = 0; x < k; x++) {
                y += c;
            }
        }

        for (int x = 0; x < k; x++) {
            s.push_back(y);
        }
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }
    return 0;
}
