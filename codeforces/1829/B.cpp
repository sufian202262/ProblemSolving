#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,cnt=0,ans=0;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)cin>>a[i];
        
        for(int i=0;i<=n-1;i++){
            if(a[i]==0)cnt++;
            ans=max(ans,cnt);
            if(a[i]!=a[i+1])cnt=0;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
