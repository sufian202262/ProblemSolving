#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,n1,n2,n3,d;
    cin>>n;
    n3=n;
    n1=n/10;
    d=n%10;
    n=n/100;
    n2=10*n+d;
    cout<<max(n1,max(n2,n3));

    return 0;
}