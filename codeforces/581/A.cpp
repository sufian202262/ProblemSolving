#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int mini=min(a,b);
    int mx=max(a,b);
    
    cout<<mini<<" "<<(mx-mini)/2;

    return 0;
}
