#include <bits/stdc++.h>
using namespace std;

#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define int long long

#define endl '\n'
#define out(x) {cout<< x <<"\n";};


signed main(){
    string s;
    cin>>s;
    bool flag=true;

    for(int i=0;i<s.length(); ){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i+=3;
        }
        else if(s[i]=='1' && s[i+1]=='4'){
            i+=2;
        }
        else if(s[i]=='1'){
            i+=1;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)Y;
    else N;
    return 0;
}