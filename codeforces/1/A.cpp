#include <bits/stdc++.h>
using namespace std;

#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define int long long

#define endl '\n'
#define out(x) {cout<< x <<"\n";};


signed main(){   
    int n,m,a,ans=0;
    cin>>n>>m>>a;

        ans = ((n+a-1)/a) * ((m+a-1)/a);
    cout<<ans<<endl;
    return 0;
}