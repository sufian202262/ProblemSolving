#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    
    for(int i=0;i<n;i++){
        cout<<char('a'+i%k);
    }
    return 0;
}