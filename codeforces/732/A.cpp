#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,i=1;
    cin>>k>>r;
    while(1){
        if((k*i%10)==0)break;
        else if((k*i-r)%10==0)break;
        i++;
    }
    cout<<i;
    
    return 0;
}
