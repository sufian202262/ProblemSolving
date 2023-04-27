#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;cin>>n;
    int x[111111];
    int p=n;
    
    for(int i=0;i<n;i++){
        int u;
        cin>>u;
        x[u]=1;
        
        while(x[p]){
            cout<<p<<" ";
            p--;
        }
        cout<<"\n";
    }

    return 0;
}