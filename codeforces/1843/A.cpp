#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,sm=0;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0,j=n-1;i<n/2;i++,j--){
            sm+=abs(a[i]-a[j]);
        }
        cout<<sm<<"\n";
    }
    return 0;
}

