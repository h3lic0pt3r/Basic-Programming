#include<bits/stdc++.h>

using namespace std;

int main(){
    int testno;
    cin>>testno;
    for(int t=0;t<testno;t++){
        int n;
        cin>>n;
        int arr1[n],arr2[n];
        for(int &it: arr1) 
            cin>>it;
        for(int &it:arr2)
            cin>>it;
        vector<pair<int,int>> arr3(n);
        for(int i=0;i<n;i++) arr3[i] = {arr1[i]+arr2[i],i};
        
    }
}