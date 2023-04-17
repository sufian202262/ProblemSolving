#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,ans=1;
    cin>>k>>r;
    
    int cur=k;
    while(cur%10!=0 && cur%10!=r){
        cur+=k;
        ans++;
    }
    cout<<ans;
    return 0;
}
