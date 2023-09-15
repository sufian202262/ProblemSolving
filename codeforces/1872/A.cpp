#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){
    int a,b,c,big,sml,i;
    cin>>a>>b>>c;

    if(a>b){big=a;sml=b;}
    else {big=b;sml=a;}
    cout<<ceil((big-sml)/(2.0*c))<<endl;
  }
  return 0;
}