#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    freopen("diamond.in", "r" ,stdin);
    freopen("diamond.out", "w" ,stdout);
    ll n,k,cnt=0;
    int ans=0;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(begin(v),end(v));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[j]-v[i]<=k){ ans = max(ans,j - i + 1);}
            
        }
        
    }
    cout<<ans<<endl;

    return 0;
}
