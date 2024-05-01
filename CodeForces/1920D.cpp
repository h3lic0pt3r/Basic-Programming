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
 
typedef unsigned long long int ll;
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
 
#define rforit(arr) for(auto it = arr.rbegin();it!= arr.rend();++it)
#define fro(i,e) for(ll i = 0; i < e; i++)
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
 
ll modf(ll  x, ll y){
    if(x%y==0)
        return y;
    else return x%y;
}
 
ll loc_find(map<ll,ll> arr1, vp64 arr2, ll x){
    rforit(arr2){
        if(arr1[x]!=0){
            break;
        }
        x =modf(x,it->first/(it->second+1));
    }
    return arr1[x];
}
 
void solve(){
    vp64 arr2;
    map <ll,ll> arr1;
    ll n,q,magni,size=0;
    cin>>n>>q;
    ll type;
    fro(i,n){
        cin>>type>>magni;
        if(type==1){
            size++;
            arr1[size]=magni;
        }
        else{
            if(size<2*pow(10,18)/(magni+1)){
                size*=(magni+1);
                arr2.push_back({size,magni});
            }
            else if(size==2e18) continue;
            else size=2*pow(10,18),arr2.push_back({size,magni});
        }
    }
    fro(i,q){
        cin>>magni;
        out(loc_find(arr1,arr2,magni));
    }
}
int main()
{
 ll t;
 cin >> t;
 fro(it,t){
     solve();
 }
 return 0;
}