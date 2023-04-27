#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n,chk=0;cin>>n;
    string s;cin>>s;
    
    int a[11111];
    
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
        a[int(s[i])]=1;
    }
    for(int i='a';i<='z';i++){
        if(a[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}