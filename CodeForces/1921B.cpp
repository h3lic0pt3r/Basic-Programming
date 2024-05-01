#include <bits/stdc++.h> 

using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
template <typename T, typename U>
T max(T x, U y)
{
    return x>y ? x : y;
}
ll MOD = 998244353;
double eps = 1e-12;
#define for(i,e) for(ll i = 0; i < e; i++)
#define fors(i,s,e) for(ll i = s; i < e; i++)
#define out(x) cout<<x<<endl
#define rfor(i,s) for(ll i = s; i >= 0; i--)
#define rfors(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    ll n,req=0,misp=0;
    cin>>n;
    //char box[n],cat[n];
    string box, cat;
    cin>>box;
    cin>>cat;
    for(i,n){
        if(int(box[i])==49&&int(cat[i])==48)
            misp++;
        else if(int(box[i])==48&&int(cat[i])==49)
            req++;
    }
    out(max(misp,req));
}
int main()
{
 ll t;
 cin >> t;
 for(it,t){
     solve();
 }
 return 0;
}