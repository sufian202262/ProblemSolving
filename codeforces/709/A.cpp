#include <iostream>
using namespace std;

int main()
{
    int n,b,d,ans=0,sum=0;
    cin>>n>>b>>d;
    
    long long arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]<=b){
            if(sum<=d){
                sum+=arr[i];
            }
            if(sum>d){
                sum=0;
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}