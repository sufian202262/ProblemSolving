#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int sum=0,k=0,dif1,dif2;
    string str="abcdefghijklmnopqrstuvwxyz";
    
    for(int i=0;i<s.size();i++){
        for(int j=0;j<str.size();j++){
            if(s[i]==str[j]){
                if(s[i]<str[k]){
                    dif1=(str[k]-s[i]);
                    if(str[k]=='a')dif2=(str[str.size()-1]-str[k])+1;
                    else dif2=(str[str.size()-1]-str[k])+(s[i]-str[0])+1;
                    (dif1<dif2)?sum+=dif1:sum+=dif2;
                }
                else if(s[i]>str[k]){
                    dif1=(s[i]-str[k]);
                    if(str[k]=='a')dif2=(str[str.size()-1]-s[i])+1;
                    else dif2=(str[str.size()-1]-s[i])+(str[k]-str[0])+1;
                    (dif1<dif2)?sum+=dif1:sum+=dif2;
                }
                k=j;
            }
        }
    }
    cout<<sum;
    return 0;
}
