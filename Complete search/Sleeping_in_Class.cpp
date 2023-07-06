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

   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector <int> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum += v[i] ;
    }
 
    if(sum==0)
    {
        cout<<0<<endl;
    }else{


    for(int i=1;i<=sum;i++){

        if(sum % i == 0){
            bool ok = true;
            int sum2=0;
            for(auto g : v){
                sum2+=g;
                if(sum2>i){
                    ok = false;
                    break;
                }else if(sum2==i){
                    sum2=0;
                }
            }

            if(ok){
                cout<<(n - (sum/i))<<endl;break;
            }
        }

    }
   }
}
    return 0;
}