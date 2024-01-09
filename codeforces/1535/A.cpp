#include <bits/stdc++.h>
using namespace std;

#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define int long long

#define endl '\n'
#define out(x) {cout<< x <<"\n";};


signed main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int p1=(a[0]>a[1])?a[0]:a[1];
        int p2=(a[2]>a[3])?a[2]:a[3];

        sort(a,a+4);
        if((p1==a[2] && p2==a[3]) || (p1==a[3] && p2==a[2])){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}