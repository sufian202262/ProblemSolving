#include <iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if( s[i] != t[i] ) cout<<1;
        else cout<<0;
    }

    return 0;
}
