#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    vector <pair<int,char>> v;
    cin>>n;

    for(int i=0;i<n;i++){
        char t;
        int c;
        cin>>t>>c;
        v.push_back({c,t});
    }

    sort(begin(v),end(v));
    int min_sq = n;
    for(int i=0;i<n;i++){
        int numLiar = 0;
        for(int j=0;j<i;j++){
            if(v[j].second =='L') numLiar ++;
        }
        for(int j=i+1;j<n;j++){
            if(v[j].second == 'G')  numLiar++;
        }

        min_sq = min(min_sq,numLiar);


    }
    cout<<min_sq<<endl;

    return 0;
}
