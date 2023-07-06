#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int n;cin>>n;
    map <char,int> mpp;
    for(char c = 'a' ; c <='z';c++){
        mpp[c]=0;
    }
    while(n--){
        char arr[26]{},arr2[26]{};
        string a,b;cin>>a>>b;
        for(auto c : a){
            arr[ c - 'a']++;
        }
        for(auto c : b){
            arr2[ c - 'a']++;
        }

        for(int i=0;i<26;i++){
            mpp[ i + 'a'] += max(arr[i],arr2[i]);
        }

    }
    for(auto i : mpp){
        cout<<i.second<<endl;
    }


    return 0;
}
