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
 
int count0(int x){
    int i=0;
    while(x%10==0){
        i++;
        x=x/10;
    }
    return i;
}

void solve(){
    int n, m;
    ll count=0;
    cin>>n>>m;
    vector<int> arr0(n);
    string input;
    forn(i,n){
        cin>>input;
        arr0[i]=count0(stoi(input));
        count+=input.length();
    }
    sort(arr0.begin() , arr0.end() , greater<int>());
    forn(i,n/2+n%2){
        count-=arr0[2*i];
    }
    if(count>m)out("Sasha");
    else out("Anna");
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