#include<bits/stdc++.h>

using namespace std;

int main(){
    int m ,n,testno;
    cin>>testno;
    for(int i=0;i<testno;i++){
        cin >>m;
        cin >>n;
        if(m>n){
            cout<<m<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
}