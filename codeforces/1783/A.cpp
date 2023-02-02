#include <iostream>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==arr[n-1]) cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<arr[0]<<" ";
            for(int i=n-1;i>0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}