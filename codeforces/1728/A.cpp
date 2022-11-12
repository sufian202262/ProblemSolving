#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n,maxidx=0;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;++i){
            cin>>a[i];
            if(a[maxidx]<=a[i])maxidx=i;
        }

        cout<<maxidx+1<<endl;
    }
 
    return 0;
}