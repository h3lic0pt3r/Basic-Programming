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
#define INF 2147483647
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    ll h,w,x1,x2,y1,y2;
    cin>>h>>w>>y1>>x1>>y2>>x2;
    if(y1<y2){
            if((y2-y1)%2==1){ //alice win case
                if(x1>=(x2-1)&&x1<=(x2+1))
                    out("Alice1");
                else if(x1<x2){
                        if((y2-y1)/2>((x2-x1)+1)){ //catches bob before reaching edge
                            out("Alice2");
                        }
                        else if((y2-y1)/2>=(w-x2)+(x2-x1)-1)      //catches just by corner at edge
                            out("Alice3");
                        else 
                            out("Draw");
                    }
                    else if(x1>x2){                             //same thing  but left side running
                        if((y2-y1)/2>(x1-x2)+1)
                            out("Alice4");
                        else if((y2-y1)/2>=x2+(x1-x2)-1)
                            out("Alice5");
                        else    
                            out("Draw");
                    }
                    else out("Alice6");
            }
            else{
                if(x1<x2){
                        if((y2-y1)/2>=(w-x2)+(x2-x1)-1)
                            out("Bob2");
                        else if((y2-y1)/2>((x2-x1)+1)){ //catches alice before reaching edge
                            out("Bob1");
                        }
                        else 
                            out("Draw");
                    }
                else if(x1>x2){
                    if((y2-y1)/2>(x1-x2)+1)
                            out("Bob3");
                        else if((y2-y1)/2>=x2+(x1-x2)-1)
                            out("Bob4");
                        else    
                            out("Draw");
                    }
                else out("Bob5");
            }
    }               
    else                      //draw case
        out("Draw");

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