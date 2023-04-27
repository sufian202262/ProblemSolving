#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n,x,ans=0;
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    for(int i=1;i<n-1;i++){
        ans+= (v[i]>v[0] && v[i]<v[n-1]);
    }
    
    cout<<ans;
    return 0;
}