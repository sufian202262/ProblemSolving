#include <bits/stdc++.h>
using namespace std;

#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << " : " << s << "\n"
#define matrix(grid, n, m) vector < vector <ll> > grid(n, vector <ll> (m));
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fixed(n) cout << fixed << setprecision(n)
#define Num_of_Digits(n) ((int)log10(n)+1)
#define getline(s) getline(cin >> ws, s)
#define to_decimal(bin) stoll(bin, nullptr, 2)
#define TC int t; cin >> t; while(t--)
#define rall(s) s.rbegin(), s.rend()
#define all(s) s.begin(), s.end()
#define sz(x) int(x.size())
#define pi pair <int, int>
#define fi first
#define se second
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define pb(x) push_back(x)
#define ll long long

#define out(x) {cout<< x <<"\n";};
#define unq(x) x.erase(unique(x.begin(),x.end()),x.end())

const char nl = '\n';

int main()
{   
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    TC{
        string s1,s2;
        cin>>s1>> s2;
        
        char c = s1[0];

        s1[0] = s2[0];
        s2[0] = c;

        cout<<s1<< " " << s2 << endl;
    }
    
  return 0;
}