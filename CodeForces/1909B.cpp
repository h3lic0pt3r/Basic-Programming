#include<bits/stdc++.h>

using namespace std;

int main(){
    int testno,n,max,num;
    cin>>testno;
    for(int tests =0;tests<testno;tests++){
        max =0;
        cin>>n;
        vector<int> arr(n);
        for(int &it: arr) cin>>it;
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=1;i--){
            arr[i]=arr[i]-arr[i-1];
            /*cout<<arr[i]<<"  "<<arr[i-1]<<endl;*/
        }
        /*for(int i=1;i<n;i++){
            cout<<arr[i]<<" ";
        }*/
        map<int,int> count;
        for(int i=1;i<n;i++){
            count[arr[i]]++;
        }
        for(auto &it: count){
            if(it.second>max){
                num = it.first;
                max = it.second;
            }
            /*cout<<it.first<<" "<<it.second<<endl;*/
        }
        cout<<num<<endl;
    }
}