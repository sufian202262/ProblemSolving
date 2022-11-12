#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n,maxi,maxidx=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        
        maxi=a[0];
        for(i=0;i<n;++i){
            if(a[i]>=maxi){
                maxi=a[i];
                maxidx=i;
            }
        }
        
        cout<<maxidx+1<<endl;
    }
 
    return 0;
}