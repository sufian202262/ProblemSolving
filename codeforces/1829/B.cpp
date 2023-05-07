#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,cnt=0,ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)cnt++;
            else cnt=0;
            ans=max(ans,cnt);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
