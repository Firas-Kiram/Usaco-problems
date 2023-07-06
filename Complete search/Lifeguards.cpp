#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second

int main() {
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    ll n;cin>>n;
    vector <pi> v(n+1);
    for(int i=1;i<n+1;i++){
        cin>>v[i].F>>v[i].S;
    }

    int max_q=0;
    int c=v.size()-1;
    for(int i=0;i<n;i++){
        int cnt=0;
       vector<bool> s(1001, false);
       for(int j=1;j<n+1;j++){
        if(c==j) continue;
            for(int k=v[j].F ; k <v[j].S;k++){
                s[k]=true;
            }
       }
       for(int k=1;k<s.size();k++){
            if(s[k]==true){
                cnt++;
            }
       }
       max_q = max(max_q,cnt);
       c--;
    }
    cout<<max_q<<endl;
    return 0;
}