#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int mx=max(a,max(b,c));
    int mini=min(a,min(b,c));
    cout<<mx-mini;

    return 0;
}
