#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    char cur='a';
    int sum=0;
    for(auto c: s){
        sum+=min(abs(cur-c),26-abs(cur-c));
        cur=c;
    }
    cout<<sum;
    
    return 0;
}
