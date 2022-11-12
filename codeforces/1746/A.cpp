#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,one=0;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)one++;
        }
        if(one==0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
