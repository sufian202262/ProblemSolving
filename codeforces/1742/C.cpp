#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        char a[8][8];
        int chk,flag=0;
        for(int i=0;i<8;i++){
            chk=0;
            for(int j=0;j<8;j++){
                cin>>a[i][j];
                if(a[i][j]=='R'){
                    chk++;
                    if(chk==8){
                        flag=1;break;
                    }
                }
            }
        }
        cout<<((flag==1)?"R":"B")<<endl;
    }
    return 0;
}
