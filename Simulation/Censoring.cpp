#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("censor.in", "r", stdin);

    string s,t;
    cin>>s>>t;
    string x{};
    for(int i=0;i<s.length();i++){
        x+=s[i];
        if(x.length()>= t.length() && x.substr( x.length() - t.length() )== t ){
            x.resize(x.length() - t.length());
        }
    }
    freopen("censor.out", "w", stdout);
    cout<<x<<endl;

    return 0;
}
