#include <bits/stdc++.h>
using namespace std;

int main()
{
    int up=0,lo=0;
    string s;
    cin>>s;
    
    for(int i=0;i<s.size();i++){    
        (s[i]>='A' && s[i]<='Z')?up++:lo++;
    }
    (up>lo)?transform(s.begin(),s.end(),s.begin(),::toupper):transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;

    return 0;
}