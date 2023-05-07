#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
    while(n--){
        string s,st="codeforces";
        cin>>s;
        int ans=0;
        
        for(int i=0;i<10;i++){
            if(s[i]!=st[i])ans++;
        }
        cout<<ans<<"\n";
        
    }

    return 0;
}
