#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int ans=0;
        
        if(s[n-1]!='0')ans+=s[n-1]-'0';
        
        for(int i=0;i<n-1;i++){
            if(s[i]!='0')ans+=(s[i]-'0')+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}