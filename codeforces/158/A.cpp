#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[k-1]==0){
            if(arr[i]>arr[k-1])cnt++;
        }
        else if(arr[i]>=arr[k-1])cnt++;
    }
    cout<<cnt;

    return 0;
}
