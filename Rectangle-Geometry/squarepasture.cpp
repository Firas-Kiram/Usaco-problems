#include <bits/stdc++.h>
using namespace std;

struct use{
    int x1,x2,y1,y2;
};  

int main() {
    freopen("square.in", "r", stdin);    
    freopen("square.out", "w", stdout);
    use a,b;
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;


  int x = max(0,max(a.x2,b.x2) - min(a.x1,b.x1));
  int y = max(0,max(a.y2,b.y2) - min(a.y1,b.y1));
  int z = max(x,y);
  cout<<z*z<<endl;


    return 0;
}