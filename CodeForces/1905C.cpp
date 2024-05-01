#include<bits/stdc++.h>

using namespace std;

int main(){
    int testno,count,n;
    cin>>testno;
    for(int i=0;i<testno;i++){
        cin>>n;
        vector<int> arr1(n),arr2(n);
        for(int t=0;t<n;t++){
            cin>>arr1[t];
        }
    }
    for(auto &it : arr1){
        cout<<it;
    }
}