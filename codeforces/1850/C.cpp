#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s[8];
        for(int i=0;i<8;i++){
            cin>>s[i];
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(s[i][j]!='.')cout<<s[i][j];
            }
        }
        cout<<"\n";
    }
    return 0;
}