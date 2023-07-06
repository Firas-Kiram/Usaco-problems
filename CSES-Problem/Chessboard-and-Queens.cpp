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
ll cnt=0,n=8;
vector<bool> colum(n),posd(n),negd(n);
vector <vector<char>> v(n,vector<char>(n));

void queen(int k){

    if(k==n){
        cnt++;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(colum[i] || posd[i+k] || negd[i-k+n-1] || v[k][i]=='*') continue;
            colum[i] = posd [i+k] = negd[i-k+n-1] = 1;
            queen(k+1);
            colum[i] = posd [i+k] = negd[i-k+n-1] = 0;

        }
    }

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    queen(0);
    cout<<cnt<<endl;

    return 0;
}