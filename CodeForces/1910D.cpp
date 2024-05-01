#include<bits/std++.h>

using namespace std;

int main(){
    int testno,n,q,tmp1,tmp2;
    cin>>testno;
    for(int tests;tests<testno;tests++){
        cin>>n>>q;
        vector <pair<int,int>> arr(n);
        int size=0;
        for(int i =0;i<n;i++){
            cin>>tmp1>>tmp2;
            if(tmp1==1){
                size++;
            }
            else{
                size=size*(tmp2+1);
            }
        }
    }   
}