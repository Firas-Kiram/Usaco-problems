#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n,m;
    vector<int> limit(101);
    int max=0,pos=1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int c1,c2;
        cin>>c1>>c2;
        for(int j =0;j<c1;j++){
            limit[pos++]=c2;
        }
    }
    int x=1,dis=1;
    for(int i=0;i<m;i++){
        int speed,c;
        cin>>c>>speed;
        dis+=c;
        for(int j=x;j<dis;j++){
            if(limit[j]<speed){
                if(max < speed - limit[j]){
                    max = speed - limit[j];
                }
            }
        }
        x=dis;
    }

    cout<<max<<endl;



    return 0;
}
