#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ones=0,zeros=0;
    string s;
    cin>>n>>s;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')ones++;
        else zeros++;
    }
    cout<<abs(ones-zeros);
    return 0;
}
