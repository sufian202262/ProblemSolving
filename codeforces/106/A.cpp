#include <iostream>
using namespace std;

int main()
{
    char c;
    string s1,s2;
    int fr,sr;
    
    cin>>c>>s1>>s2;
    
    string rank="6789TJQKA";
    
    if(s1[1]==c && s1[1]!=s2[1]){cout<<"YES\n";return 0;}
    
    for(int i=0;i<rank.size();i++){
        if(s1[0]==rank[i])fr=i;
        if(s2[0]==rank[i])sr=i;
    }
    if(fr>=sr && s1[1]==s2[1])cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
