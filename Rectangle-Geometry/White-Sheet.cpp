#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
 
struct use{
    int x1,x2,y1,y2;
};  
 
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    use a,b,c;
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;
    cin>>c.x1>>c.y1>>c.x2>>c.y2;
 
    int size = (a.x2 - a.x1) * (a.y2 - a.y1) ; 
 
    int z = max( 0, min(a.x2,b.x2) - max(a.x1,b.x1)) * max( 0, min(a.y2,b.y2) - max(a.y1,b.y1));
    int z1 = max( 0, min(a.x2,c.x2) - max(a.x1,c.x1)) * max( 0, min(a.y2,c.y2) - max(a.y1,c.y1));
 
    int inter3x = max( 0, min({c.x2,b.x2,a.x2}) - max({c.x1,b.x1,a.x1}));
    int inter3y = max( 0, min({c.y2,b.y2,a.y2}) - max({c.y1,b.y1,a.y1}));
 
    int z2 = max( 0, min({c.x2,b.x2,a.x2})-max({c.x1,b.x1,a.x1}))*max( 0, min({c.y2,b.y2,a.y2}) - max({c.y1,b.y1,a.y1}));
 
 
    if(size > (z + z1 - z2)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
    return 0;
}