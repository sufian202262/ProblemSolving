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
        int n;cin>>n;
        int d1,d2,d3,d4,sum=4;

        d4=(n%10==0?10:n%10);n/=10;
        d3=(n%10==0?10:n%10);n/=10;
        d2=(n%10==0?10:n%10);n/=10;
        d1=(n%10==0?10:n%10);

        sum+=(d1==0?abs(10-1):abs(d1-1));
        sum+=(d2==0?abs(10-d1):abs(d2-d1));
        sum+=(d3==0?abs(10-d2):abs(d3-d2));
        sum+=(d4==0?abs(10-d3):abs(d4-d3));
        cout<<sum<<nl;
    }
    
  return 0;
}