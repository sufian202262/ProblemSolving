#include <bits/stdc++.h>
using namespace std;

#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define int long long

#define endl '\n'
#define out(x) {cout<< x <<"\n";};


signed main(){
    int n;
    cin>>n;

    while(n>0){
        int x;
        cin>>x;

        if(x==1){
            cout<<"HARD";
            return 0;
        }
        n--;
    }
    cout<<"EASY";
    return 0;
}