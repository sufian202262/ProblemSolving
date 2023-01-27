#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        string n,s="314159265358979323846264338327";
        cin>>n;
        
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==n[i])k++;
            else break;
        }
        cout<<k<<endl;
    }

    return 0;
}
