#include <bits/stdc++.h>
using namespace std;

struct Rect {

    int x1,y1,x2,y2;
    int area() { return (y2-y1)*(x2-x1); }

};

int intersect(Rect p,Rect q){

    int x = max(0,min(p.x2,q.x2) - max(p.x1,q.x1));
    int y = max(0,min(p.y2,q.y2) - max(p.y1,q.y1));
    return x * y;
}

int main() {

Rect a,b,c;
cin>>a.x1>>a.y1>>a.x2>>a.y2;
cin>>b.x1>>b.y1>>b.x2>>b.y2;
cin>>c.x1>>c.y1>>c.x2>>c.y2;
cout<<a.area() + b.area() - intersect(a,c) - intersect(b,c)<<endl;
}