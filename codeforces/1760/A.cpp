#include <iostream>
using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a>b && a<c) cout<<a<<endl;
        else if(a<b && a>c)cout<<a<<endl;
        else if(b>c && b<a)cout<<b<<endl;
        else if(b<c && b>a)cout<<b<<endl;
        else cout<<c<<endl;
        
    }

    return 0;
}
