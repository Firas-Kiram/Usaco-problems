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

int get_id(char c) {

    if (c == 'C') {
        return 1;
    } else if (c == 'G') {
        return 2;
    } else if (c == 'T') {
        return 3;
    } else {
        return 0; 
    }
}

int main() {
   
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

   ios_base::sync_with_stdio(false);
   cin.tie(0);

   ll n,m;
   cin>>n>>m;
   int spotty[501][51],plain[501][51];
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c ;
            cin>>c;
            spotty[i][j] =  get_id(c);
        }
   }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c ;
            cin>>c;
            plain[i][j] =  get_id(c);
        }
   }
   int cnt=0;
   for(int i=0;i<m-2;i++){
    for(int j=i+1;j<m-1;j++){
        for(int k=j+1;k<m;k++){
            bool ok = 1;
            int arr[4][4][4];
            memset(arr, 0, sizeof(arr));
            for(int g=0;g<n;g++){
                arr[spotty[g][i]][spotty[g][j]][spotty[g][k]] = 1;
            }
            for(int g=0;g<n;g++){
                if(arr[plain[g][i]][plain[g][j]][plain[g][k]]) ok = 0 ;
            }
            if(ok) cnt++;
        }
    }
   }
   cout<<cnt<<endl;
    return 0;
}