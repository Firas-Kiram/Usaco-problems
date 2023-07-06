#include <bits/stdc++.h>
using namespace std;

struct use{
    int x1,x2,y1,y2;
};  

int main() {
    freopen("billboard.in", "r", stdin);    
    freopen("billboard.out", "w", stdout);
     use a,b;
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;

    if(b.y2 >= a.y2 && b.y1 <= a.y1 && b.x2 >= a.x2 && b.x1 <= a.x1   ){
        cout<<'0'<<endl;
    }else if(b.y2 >= a.y2 && b.y1 <= a.y1 && b.x1 < a.x2 && b.x1 > a.x1 && b.x2 >= a.x2 ){
        cout<<(b.x1 - a.x1 ) * (a.y2 - a.y1)<<endl;
    }else if(b.y2 >= a.y2 && b.y1 <= a.y1 && b.x2 > a.x1 && b.x2 < a.x2 && b.x1 <= a.x1 ){
        cout<<(a.x2 - b.x2 ) * (a.y2 - a.y1)<<endl;
    }else if(b.y2 < a.y2 && b.y2 > a.y1 && b.y1 <= a.y1 && b.x2 >= a.x2 && b.x1 <= a.x1){
        cout<<(a.x2 - a.x1) * (b.y2 - b.y1)<<endl;
    }else if(b.y1 < a.y2 && b.y1 > a.y1 && b.y2 >= a.y2 && b.x2 >= a.x2 && b.x1 <= a.x1){
        cout<<(a.x2 - a.x1) * (b.y1 - a.y1)<<endl;
    }else {
        cout<<(a.x2 - a.x1) * (a.y2 - a.y1)<<endl;
    }


    return 0;
}