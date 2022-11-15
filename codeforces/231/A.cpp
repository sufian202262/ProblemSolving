#include <iostream>
using namespace std;

int main()
{
    int n,one=0,solve=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(a[i][j]==1)one++;
        }
        if(one>=2)solve++;
        one=0;
    }
    cout<<solve;

    return 0;
}