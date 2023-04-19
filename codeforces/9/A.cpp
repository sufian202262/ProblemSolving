#include <iostream>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    
    int maxi=max(y,w);
    int n=6-maxi+1;
    int d=6;
    
    if(n%2==0){
        n=n/2;
        d=d/2;
    }
    if(n%3==0){
        n=n/3;
        d=d/3;
    }
    cout<<n<<"/"<<d;

    return 0;
}
