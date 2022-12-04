#include <iostream>
using namespace std;

int main()
{
    int n,d=0;
    cin>>n;
    if(n==0){
        cout<<"O-|-OOOO\n";return 0;
    }
    else{
        for(int i=n;i>0;i=i/10){
            d=i%10;
            if(d==0){cout<<"O-|-OOOO\n";}
            if(d==1){cout<<"O-|O-OOO\n";}
            if(d==2){cout<<"O-|OO-OO\n";}
            if(d==3){cout<<"O-|OOO-O\n";}
            if(d==4){cout<<"O-|OOOO-\n";}
            if(d==5){cout<<"-O|-OOOO\n";}
            if(d==6){cout<<"-O|O-OOO\n";}
            if(d==7){cout<<"-O|OO-OO\n";}
            if(d==8){cout<<"-O|OOO-O\n";}
            if(d==9){cout<<"-O|OOOO-\n";}
        }
    }

    return 0;
}
