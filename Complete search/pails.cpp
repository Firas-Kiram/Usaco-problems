#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out","w", stdout);
    int x,y,m;
    cin>>x>>y>>m;

        int dy,dx,ans=0,c=0;
        dy = m/y;
        dx = m/x;
        
        for(int i=0;i<=dx;i++){
            for(int j=0;j<=dy;j++){
                c = x*i+y*j;
                if(c<=m){ans = max(c,ans);}
            }
        }
        cout<<ans<<endl;


    return 0;
}
