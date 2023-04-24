#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    string ans,s="abcdefghijklmnopqrstuvwxyz";
    
    for(i=0;i<k;i++){
        ans+=s[i];
    }
    i=0;
    while(ans.size()!=n){
        ans+=s[i];
        i++;
        if(i==k)i=0;
    }
    cout<<ans;
    return 0;
}