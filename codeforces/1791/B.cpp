#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,f=0;cin>>n;
        int x=0,y=0;
        string arr;
        cin>>arr;
        for(int i=0;i<n;i++){
            if(arr[i]=='U')y+=1;
            if(arr[i]=='R')x+=1;
            if(arr[i]=='D')y-=1;
            if(arr[i]=='L')x-=1;
            if(x==1 && y==1) {cout<<"YES\n";f=1;break;}
        }
        if(f==0)cout<<"NO\n";
    }

    return 0;
}