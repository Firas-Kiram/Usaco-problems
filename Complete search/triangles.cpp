#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second

int main() {
    freopen("triangles.in","r",stdin);
    freopen("triangles.out","w",stdout);
    ll c;cin>>c;

    vector <ll> x(c),y(c);
    for(int i=0;i<c;i++){
        cin>> x[i] >> y[i] ;
    }
    ll max_q = 0;
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
                ll v = 0;
                if(y[i]==y[j] && x[i]==x[k]){
                     v = abs(x[j]-x[i]) * abs(y[j]-y[k]);
                }
                max_q = max(max_q,v);
            }
        }
    }
    cout<<max_q<<endl;
    return 0;
}