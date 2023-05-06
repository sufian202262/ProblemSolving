#include <iostream>
using namespace std;

void solve(){
        int n;cin>>n;
        int a[n];
        
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int x=0;x<=n;x++){ //x liars
            int lie=0;
            for(int i=1;i<=n;i++){
                if(x<a[i])lie++;
            }
            if(lie==x){
                cout<<x<<"\n";
                return;
            }
        }
        cout<<-1<<"\n";
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
