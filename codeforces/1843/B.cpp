#include<iostream>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n;
        long long sum=0,c=0,neg=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=abs(x);
            if(x>0){c+=neg;neg=0;}
            else if(x<0)neg=1;
        }
        cout<<sum<<" "<<c+neg<<"\n";
    }
    return 0;
}
