#include <bits/stdc++.h>
using namespace std;

#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i=0; i<n; i++) for(int j=0; j<m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_2d(vec, r, c) for(int i=0; i<r; i++, cout << "\n") for(int j=0; j<c && cout << vec[i][j] << " "; j++)
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << " : " << s << "\n"
#define matrix(grid, n, m) vector < vector <ll> > grid(n, vector <ll> (m));
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fixed(n) cout << fixed << setprecision(n)
#define Num_of_Digits(n) ((int)log10(n)+1)
#define getline(s) getline(cin >> ws, s)
#define to_decimal(bin) stoll(bin, nullptr, 2)
#define TC int t; cin >> t; while(t--)
#define rall(s) s.rbegin(), s.rend()
#define all(s) s.begin(), s.end()
#define sz(x) int(x.size())
#define Pair pair <int, int>
#define fi first
#define se second
#define pb(x) push_back(x)
#define ll long long
#define PI acos(-1)
#define Mod 1'000'000'007
#define INF 2'000'000'000
#define EPS 1e-9
 
void Abu_Sufian(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

 
int main()
{   
    Abu_Sufian(); 
    int n,g=1;
    cin>>n;
    
    int a[n];
    cin(a);
    
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1])g++;
    }
    cout<<g;
  return 0;
}