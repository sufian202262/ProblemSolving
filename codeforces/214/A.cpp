#include <bits/stdc++.h>
using namespace std;

#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define int long long

#define endl '\n'
#define out(x) {cout<< x <<"\n";};


signed main(){
    int n,m,ans=0;
    cin>>n>>m;

    for(int a=0;a*a<=n;a++){
        for(int b=0;b*b<=m;b++){
            if(((a*a+b)==n) && ((a+b*b)==m)){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}