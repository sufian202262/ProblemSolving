#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int mini=abs(arr[0]-arr[n-1]);
    int fidx=0,sidx=n-1;
    
    for(int i=1;i<n;i++)
        if(mini>abs(arr[i]-arr[i-1])){
            mini=abs(arr[i]-arr[i-1]);
            fidx=i;
            sidx=i-1;
        }
    
    cout<<fidx+1<<" "<<sidx+1;
    
    return 0;
}
