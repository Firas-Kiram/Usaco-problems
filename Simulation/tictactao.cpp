#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("tttt.in", "r", stdin);
    char arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    set <char> s;
    set <set<char>> sg;

    s.insert({arr[0][0],arr[0][1],arr[0][2]});
    sg.insert(s);
    s.clear();
    s.insert({arr[1][0],arr[1][1],arr[1][2]});
    sg.insert(s);
    s.clear();
    s.insert({arr[2][0],arr[2][1],arr[2][2]});
    sg.insert(s);
    s.clear();
    s.insert({arr[2][0],arr[1][1],arr[0][2]});
    sg.insert(s);
    s.clear();
    s.insert({arr[0][0],arr[1][1],arr[2][2]});
    sg.insert(s);
    s.clear();
    s.insert({arr[0][0],arr[1][0],arr[2][0]});
    sg.insert(s);
    s.clear();
    s.insert({arr[0][1],arr[1][1],arr[2][1]});
    sg.insert(s);
    s.clear();
    s.insert({arr[0][2],arr[1][2],arr[2][2]});
    sg.insert(s);
    
    int t1 = 0, t2 = 0;
    for (const auto& set : sg) {
        if (set.size() == 1) {
            t1++;
        } else if (set.size() == 2) {
            t2++;
        }
    }

    freopen("tttt.out", "w", stdout);

    std::cout << t1 << std::endl << t2;

    return 0;
}
