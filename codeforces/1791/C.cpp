#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int res=n;
        string arr;cin>>arr;
        
        for(int i=0;i<n;i++){
            if((arr[i]=='0' && arr[n-1-i]=='1') || (arr[i]=='1' && arr[n-1-i]=='0')){
                res-=2;
            }
            else break;
        }
        if(res<0)cout<<0<<endl;
        else cout<<res<<endl;
    }

    return 0;
}
