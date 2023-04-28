#include <iostream>
using namespace std;

int main()
{
    int n,diff=0,m=0;
    
    cin>>n;
    int a[n],b[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])diff=1;
        if(i!=n-1 && a[i]<a[i+1])m=1;
    }
    
    if(diff==1)cout<<"rated";
    else if(m==1)cout<<"unrated";
    else cout<<"maybe";
    return 0;
}