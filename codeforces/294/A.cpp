#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cin>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        
        if(a==1){
            arr[a]+=arr[a-1]-b;
            arr[a-1]=0;
        }
        else if(a==n){
            arr[a-2]+=b-1;
            arr[a-1]=0;
        }
        else{
            arr[a-2]+=b-1;
            arr[a]+=arr[a-1]-b;
            arr[a-1]=0;
        }
    }
    for(auto x: arr){
        cout<<x<<" ";
    }

    return 0;
}
