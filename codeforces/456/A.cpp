#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,f=0;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){cout<<"Happy Alex";f=1;break;}
    }
    if(f==0)cout<<"Poor Alex";
    return 0;
}