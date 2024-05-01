#include<bits/stdc++.h>

using namespace std;

int mod(int x,int k){
        if(x%k==0)
            return k;
        else return x%k;
}

bool comp(pair<int,int> v1, pair<int,int> v2){
    return  (v1.first > v2.first);
}

int main(){
    int testno,n,k,x;
    cin>>testno;
    
    for(int tests=0;tests<testno;tests++){
        cin>>n>>k;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i] = {mod(x,k),i+1};
        }
        sort(arr.begin(),arr.end(),comp<int>());
        for(int i=0;i<n;i++){
            cout<<arr[i].second<<" ";
        }
    }
        
}