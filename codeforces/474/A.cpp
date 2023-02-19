#include<bits/stdc++.h>
using namespace std;

int main() {
    char c;cin>>c;
    string s;
    cin>>s;
    
    string s1="qwertyuiop[]";
    string s2="asdfghjkl;'";
    string s3="zxcvbnm,./";
    
    if(c=='R'){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s1.size();j++){
                if(s1[j]==s[i]){
                    s[i]=s1[j-1];
                }
            }
            for(int j=0;j<s2.size();j++){
                if(s2[j]==s[i]){
                    s[i]=s2[j-1];
                }
            }
            for(int j=0;j<s3.size();j++){
                if(s3[j]==s[i]){
                    s[i]=s3[j-1];
                }
            }
        }
    }
    if(c=='L'){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s1.size();j++){
                if(s1[j]==s[i]){
                    j++;
                    s[i]=s1[j];
                }
            }
            for(int j=0;j<s2.size();j++){
                if(s2[j]==s[i]){
                    j++;
                    s[i]=s2[j];
                }
            }
            for(int j=0;j<s3.size();j++){
                if(s3[j]==s[i]){
                    j++;
                    s[i]=s3[j];
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
}