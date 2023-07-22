#include<bits/stdc++.h>
using namespace std;

#define TC int t;cin>>t;while(t--)
#define nl "\n"

int main(){
    TC{
        int n,mx=0,ans;
        cin>>n;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            if(mx<b && a<=10){
                mx=b;
                ans=i;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}
