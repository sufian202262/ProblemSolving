#include <iostream>
using namespace std;

int main()
{
    int a[4],count=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<4;i++){
        int j;
        for(j=0;j<i;j++){
            if(a[i]==a[j]) break;
        }
        if(i==j)count++;
    }
    cout<<4-count;

    return 0;
}
