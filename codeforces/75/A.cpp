#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    
    int c=stoi(a)+stoi(b);
    string s=to_string(c);
    
    a.erase(remove(a.begin(),a.end(),'0'),a.end());
    b.erase(remove(b.begin(),b.end(),'0'),b.end());
    s.erase(remove(s.begin(),s.end(),'0'),s.end());
    
    
    int d=stoi(a)+stoi(b);
    
    if(stoi(s)==d)cout<<"YES";
    else cout<<"NO";

    return 0;
}
