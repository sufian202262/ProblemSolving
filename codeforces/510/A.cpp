#include <iostream>
using namespace std;

int main()
{
    int row,col,l=0,r=0;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i%2!=0)cout<<"#";
            else if(i%2==0 && j==col && r==0 && l==0){cout<<"#";r=1;l=1;}
            else if(i%2==0 && j==1 && r==1 && l==0){cout<<"#";r=0;l=1;}
            else cout<<".";
        }
        l=0;
        cout<<"\n";
    }
    return 0;
}
