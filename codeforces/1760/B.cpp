#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n>>s;
        sort(s.begin(),s.end());
        
        cout<<s[s.size()-1]-'a'+1<<endl;
        
    }

    return 0;
}