#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    
    vector<int> v[4];
    
    for(int i=0;i<n;i++){
        cin>>x;
        v[x].push_back(i+1);
    }
    int mini=min(v[1].size(),min(v[2].size(),v[3].size()));
    cout<<mini<<endl;
    
    for(int i=0;i<mini;i++){
        cout<<v[1][i]<<" "<<v[2][i]<<" "<<v[3][i]<<"\n";
    }

    return 0;
}