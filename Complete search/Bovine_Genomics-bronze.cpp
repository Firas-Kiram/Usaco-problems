#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second

int main() {
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    ll n,m;
    cin>>n>>m;


    vector <vector<char>> s(n*2,vector<char>(m));

    for(int i=0;i<n*2;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
        }
    }

    int cnt=0;

    for(int i=0;i<m;i++){
        int c=0;
        for(int j=0;j<n;j++){
            for(int k=n;k<n*2;k++){
                if(s[j][i] == s[k][i]){
                    c++;
                }
            }
        }
        if(c==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    
    return 0;
}