#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int one=0,two=0,three=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==1)one++;
        if(arr[i]==2)two++;
        if(arr[i]==3)three++;
    }
    int mini=min(one,min(two,three));
    
    cout<<mini<<endl;
    one=0;two=0;three=0;
    
    while(mini--){
        for(int i=one;i<n;i++){
            if(arr[i]==1){
                cout<<i+1<<" ";
                one=i+1;
                break;
            }
        }
        for(int i=two;i<n;i++){
            if(arr[i]==2){
                cout<<i+1<<" ";
                two=i+1;
                break;
            }
        }
        for(int i=three;i<n;i++){
            if(arr[i]==3){
                cout<<i+1<<"\n";
                three=i+1;
                break;
            }
        }
    }

    return 0;
}