#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,tsum=0,sum=0,coin;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        tsum+=a[i];
    }
    sort(a,a+n,greater<int>());
    
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>tsum/2){
            coin=i+1;break;
        }
    }
    cout<<coin;
    return 0;
}