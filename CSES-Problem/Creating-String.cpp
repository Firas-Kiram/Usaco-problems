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
    cout.tie(0);

    string c;
    cin>>c;
    vector <string> s;
    ll cnt=0;
    sort(all(c));
    do{
        s.pb(c);
        cnt++;
    }while(next_permutation(c.begin(),c.end()));
    cout<<cnt<<endl;
    for(auto it : s){
        cout<<it<<endl;
    }
    return 0;
}