#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);	
    int x,y;
    vector <int> v;
    int i=0,j=1,z=0;
    cin>>x>>y;
    while(i<y){
        if(z==0){
        i=abs(x+j);
        v.push_back(i);
        z=1;
        }else{
        i=abs(x-j);
        v.push_back(i);
        z=0;
        }
        j*=2;
    }

    int cnt=0;
    for(int i=0;i<v.size()-1;i++){
        cnt+= abs(v[i]-v[i+1]);
    }
    cout<<cnt<<endl;


    return 0;
}
