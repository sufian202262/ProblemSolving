#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    
    y=6-max(y,w)+1;
    w=6;
    int g=__gcd(y,w);
    
    y=y/g;
    w=w/g;
    
    cout<<y<<"/"<<w;

    return 0;
}