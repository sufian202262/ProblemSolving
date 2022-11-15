#include <iostream>
using namespace std;

int main()
{
    int n,A=0,D=0;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i=0;i<n;i++){
        (s[i]=='A')?A++:D++;
    }
    cout<<((A==D)?"Friendship":(A>D)?"Anton":"Danik");

    return 0;
}
