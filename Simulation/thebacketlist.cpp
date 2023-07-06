#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("blist.in", "r", stdin);
    int arr[1001] {};
    ll n;cin>>n;
    while(n--){
        ll s,t,b;
        cin>>s>>t>>b;
        for(int i=s;i<=t;i++){
            arr[i]+=b;
        }
    }
    int max =0;
    for(int i=1;i<1001;i++){
        if(arr[i]>max) max =arr[i];
    }
    freopen("blist.out", "w", stdout);
    cout<<max<<endl;

    
    return 0;
}
