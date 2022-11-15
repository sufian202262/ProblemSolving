#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,s=0;
    cin>>n;
    while(cin>>a>>b>>c){
        s+=a+b+c>=2;
    }
    cout<<s;
    

    return 0;
}