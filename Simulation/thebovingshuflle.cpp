#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int n;
    cin>>n;
    int pos[n+1]{},arr[n+1]{},arr2[n+1]{};
    for(int i=1;i<=n;i++){
        cin>>pos[i];
    }
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        arr2[i] = i ;
    }
    for(int i=0;i<3;i++){
        int shfl[n+1]{};
        for(int j=1;j<=n;j++){
        int sh;
         shfl[pos[j]] = arr2[j]; 

        }
        for(int j = 1 ;j<=n;j++){
            arr2[j] = shfl[j];
        }
    }

    int shfl[n+1]{};
    for(int i=1;i<=n;i++){
        shfl[arr2[i]] = arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<shfl[i]<<endl;
    }
    return 0;
}
