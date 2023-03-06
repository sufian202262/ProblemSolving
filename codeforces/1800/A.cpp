#include <iostream>
using namespace std;

void solve(){
    int n;cin>>n;
    string s,s1;cin>>s;
    
    for(char& c: s){
        c=tolower(c);
    }
    
    s1=s[0];
    
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            s1+=s[i];
        }
    }
    if(s1=="meow")cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
