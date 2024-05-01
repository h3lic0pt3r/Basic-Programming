#include<bits/stdc++.h>

using namespace std;

int sign(int x){
    return (x>0)-(x<0);
}

int main(){
    int testno,n,product,tmp;
    cin>>testno;
    for(int tests = 0;tests<testno;tests++){
        product=1;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            cin>>tmp;
            arr[i]={tmp,i};
            product*= sign(arr[i].first);
        }
        if(product<=0){
            cout<<"0"<<endl;
        }
        else{
            sort(arr.begin(),arr.end());
            cout<<"1"<<endl;
            cout<<arr[n-1].second+1<<" 0"<<endl;
        }
    }
    return 0;
}