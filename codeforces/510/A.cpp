#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i%2!=0)cout<<"#";
            else if(i%4==2 && j==col || i%4==0 && j==1)cout<<"#";
            else cout<<".";
        }
        
        cout<<"\n";
    }
    return 0;
}
