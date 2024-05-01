    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    #pragma GCC optimize("unroll-loops")
    #include <bits/stdc++.h> 
    #include <complex>
    #include <queue>
    #include <set>
    #include <unordered_set>
    #include <list>
    #include <chrono>
    #include <random>
    #include <iostream>
    #include <algorithm>
    #include <cmath>
    #include <string>
    #include <vector>
    #include <map>
    #include <unordered_map>
    #include <stack>
    #include <iomanip>
    #include <fstream>
    
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
    ll MOD = 998244353;
    double eps = 1e-12;
    #define forn(i,e) for(ll i = 0; i < e; i++)
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
    #define INF 2147483647
    #define all(x) (x).begin(), (x).end()
    #define sz(x) ((ll)(x).size())

    struct sort_pred {
        bool operator()(const std::pair<ll,ll> &left, const std::pair<ll,ll> &right) {
            return left.second < right.second;
        }
    };
    

    void solve(){
        ll n,tmp,minexprev=INF,pretake=0;
        cin>>n;
        vp64 vec(n,make_pair(0,0));
    
        forn(i,n){
            vec[i].first=i;
            cin>>tmp;
            vec[tmp].second++;
        }
        sort(vec.begin(),vec.end());
        forn(i,n){
            if(vec[i].second>1||i==0){
                if(vec[i].second<i+1){
                        if(i!=n-1){
                        if(vec[i+1].second==vec[i].second){
                            out(vec[i+1].first);
                            return;
                        }
                    }
                    out(vec[i].first);
                    return;
                }
                continue;
            }
            out(vec[i].first);
            return;
        }
        out(n);
        return;
    }
    int main()
    {
    ll t;
    cin >> t;
    forn(it,t){
        solve();
    }
    return 0;
    }