#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<1<<" ";
        for(int i=n;i>=2;i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
