#include <bits/stdc++.h>
using namespace std;

#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define int long long

#define endl '\n'
#define out(x) {cout<< x <<"\n";};


signed main(){
    int year;
    cin>>year;

    while(1){
        year++;
        int a=year/1000;
        int b=year/100 %10;
        int c=year/10 %10;
        int d=year%10;


        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<year;
            break;
        }
    }
    return 0;
}