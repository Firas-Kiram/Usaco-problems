#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define sz(v) ((int)((v).size()))

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,k;
    cin>>k>>n;
    set <pair<int,int>> tmp,used;

    for(int i=0;i<k;i++) {
    vector<int> v(n) ;
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        for(int j=0;j<n;j++){
            for(int ok=j+1;ok<n;++ok){
                int a = v[j];
                int b = v[ok];
                if(tmp.count({b,a})){
                    used.insert({b,a});
                    tmp.erase({b,a});
                }
                if(!used.count({b,a}) && !used.count({a,b})) tmp.insert({a,b});

            }
        }
    }
    cout<<tmp.size()<<endl;

    return 0;
}