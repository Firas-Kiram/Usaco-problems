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
    
   freopen("cownomics.in","r",stdin);
   freopen("cownomics.out","w",stdout);
   

   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int n, m;
   cin >> n >> m;

   vector<string> spotty (n); 
   vector<string> plain (n); 
   
   for(int i=0;i<n;i++){
        cin>>spotty[i];
   }
   for(int i=0;i<n;i++){
        cin>>plain[i];
   }
   int cnt=0;
   for(int i=0;i<m-2;i++){
        for(int j=i+1;j<m-1;j++){
            for(int k=j+1;k<m;k++){
                set <string> s;
                for(string t : spotty){
                s.insert(string({t[i],t[j],t[k]}));
                }
                bool ok = 1;
                for(string &t : plain){
                    if(s.find(string({t[i],t[j],t[k]}))!=s.end()){
                        ok = 0;
                        break;
                    }
                }
                if(ok) cnt++;

            }
        }
   }

   cout<<cnt<<endl;
    return 0;
}