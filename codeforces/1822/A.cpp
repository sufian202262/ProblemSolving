#include <iostream>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,t;
        cin>>n>>t;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        int mx=0,ans=0,chk=0;
        
        for(int i=0;i<n;i++){
            if(a[i]<=t && mx<b[i]){
                ans=i;
                chk=1;
                mx=b[i];
            }
            t--;
        }
        if(chk==0)cout<<"-1\n";
        else cout<<ans+1<<endl;
    }

    return 0;
}