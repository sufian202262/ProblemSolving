#include <iostream>
using namespace std;

int main()
{
    long long n;cin>>n;
    long long a[n];
    
    for(long long i=1;i<=n;i++){
        int temp;
        cin>>temp;
        a[temp]=i;
    }

    long long v=0,p=0, m;
    cin>>m;
    while(m--){
        long long q;cin>>q;
        v+=a[q];
        p+=(n-a[q])+1;
        
    }
    cout<<v<<" "<<p<<endl;

    return 0;
}