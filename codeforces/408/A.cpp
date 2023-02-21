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
    int min=999999999;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<arr[j];i++){
            int a;cin>>a;
            sum+=a;
        }
        int res=sum*5+arr[j]*15;
        if(res<min)min=res;
    }
    cout<<min<<endl;

    return 0;
}
