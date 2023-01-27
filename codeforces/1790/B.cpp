#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,s,r,temp;
        cin>>n>>s>>r;
        cout<<s-r<<" ";
        s=s-r;n--;
        while(n>=1){
            temp=r/n;
            cout<<temp<<" ";
            r-=temp;
            n--;
        }
        cout<<endl;
    }
    return 0;
}