#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,t;
        cin>>n>>t;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        
        int ans=-2;
        for(int i=0;i<n;i++){
            if(i+a[i]<=t){
                if(ans==-2)ans=i;
                else if(b[ans]<b[i])ans=i;
            }
        }
        cout<<ans+1<<endl;
    }

    return 0;
}