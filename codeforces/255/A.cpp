#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int i=0,chest=0,biceps=0,back=0;
    
    while(n--){
        int x;cin>>x;
        if(i%3==0)chest+=x;
        else if(i%3==1)biceps+=x;
        else back+=x;
        i++;
    }
    int mx=max(chest,max(biceps,back));
    
    if(mx==chest)cout<<"chest";
    else if(mx==biceps)cout<<"biceps";
    else cout<<"back";
    return 0;
}
