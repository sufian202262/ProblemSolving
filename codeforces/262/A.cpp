#include <iostream>
using namespace std;

int main()
{
    long long n,k,x,d,r,i,res=0;
    cin>>n>>k;
    
    while(n--){
        cin>>x;
        d=0;
        for(i=x;i>0;i=i/10){
            r=i%10;
            if(r==4 || r==7) d++;
        }
        if(d<=k)res++;
    }
    cout<<res<<endl;
    return 0;
}
