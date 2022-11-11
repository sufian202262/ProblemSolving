#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,t1,t2;
    cin>>n>>m>>x>>y;
    if(m==0)
        cout<<n*x;
    else if(m==n){
        (x>y)?cout<<y:cout<<x;
    }
    else if(m>n){
        (n*x<y)?cout<<(n*x):cout<<y;
    }
    else if(n%m==0){
        int t=(n/m)*y+(n%m)*x;
        (t<n*x)?cout<<t<<endl:cout<<n*x<<endl;
    }
    else{
        t1=(n/m)*y+(n%m)*x;
        t2=(n/m+1)*y;
        (t1<t2)?cout<<t1:cout<<t2;
    }
    return 0;
}