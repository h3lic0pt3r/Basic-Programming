#include<bits/stdc++.h>

using namespace std;

int main(){
    int testno,n,k;
    cin>>testno;
    for(int i=0;i<testno;i++){
        cin>>n>>k;
        int arr[n];
        for(int a=0;a<k;a++){
            arr[(n-1)-a]=n-a;
        }
        for(int a=0;a<(n-k);a++){
            arr[a]=(n-k)-a;
        }
        for(int a =0;a<n;a++){
            cout<<arr[a]<<" ";
        }
        cout<<endl;
    }
    
}