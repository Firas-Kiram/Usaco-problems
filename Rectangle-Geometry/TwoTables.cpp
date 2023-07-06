#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;cin>>t;    
    while(t--){
        ll W,H;
        cin>>W>>H;
 
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
 
        ll w,h;
        cin>>w>>h;
 
        ll xmn=1e9,ymn=1e9;
 
        if(W < x2 - x1 + w && H < h + y2 - y1){
            cout<<-1<<endl;
            continue;
        }
 
        if( W >= w + x2 - x1){
            xmn = min(max(0LL,w - x1),max(0LL,x2 - (W - w)));
        }
        if( H >= h + y2 - y1){
            ymn = min(max(0LL,h - y1),max(0LL,y2 - (H - h)));
        }
 
        cout<<min(xmn,ymn)<<endl;
 
    }
    return 0;
}