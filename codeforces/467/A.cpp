#include <iostream>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    
    int p[n],q[n];
    for(int i=0;i<n;i++){
        cin>>p[i]>>q[i];
    }
    
    for(int i=0;i<n;i++){
        if((q[i]-p[i])>1)ans++;
    }
    cout<<ans;

    return 0;
}
