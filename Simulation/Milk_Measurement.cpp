#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    int n;cin>>n;
    vector <pair<int,pair<string,int>>> v;
    for(int i=0;i<n;i++){
        int c1,c2;
        string a;
        cin>>c1>>a>>c2;
        v.push_back({c1,{a,c2}});
    }
    sort(v.begin(), v.end());

    int m=7,b=7,e=7;
    char c = ' ';
    int cnt=0;
    char ch = ' ';
    int y = 0;
    for(int i=0;i<n;++i){
        int x=0;
        if(v[i].second.first == "Bessie"){
            b += v[i].second.second ;
        }else if(v[i].second.first == "Elsie"){
            e += v[i].second.second ;
        }else if(v[i].second.first == "Mildred"){
            m += v[i].second.second ;
        }
        int k = max(m,max(e,b));
        if(k==m){
            c = 'm';
            x++;
        }
        if(k==e){
            c = 'e';
            x++;
        }
        if(k==b){
            c = 'b';
            x++;
        }
        if(c != ch || x != y){
            cnt++;
          
            ch = c;
        }

        y = x;

    }

    cout<<cnt<<endl;

    return 0;
}
