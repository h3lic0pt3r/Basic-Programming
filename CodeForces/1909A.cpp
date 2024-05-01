#include<bits/stdc++.h>

using namespace std;

int signum(long long int x){
    return (x > 0) - (x < 0);
}

int main(){
    long long int testno,n,dirx,diry;
    cin>>testno;
    for(int tests = 0;tests<testno;tests++){
        dirx=diry=0;
        
        cin>>n;
        vector<pair<int,int>> coord(n);
        
        if(n>0){
            cin>>coord[0].first;
            cin>>coord[0].second;
        }

        for(int i=1;i<n;i++){
            cin>>coord[i].first;
            cin>>coord[i].second;
            if(signum(coord[i-1].first)*signum(coord[i].first)<0){
                dirx++;
            }
            if(signum(coord[i-1].second)*signum(coord[i].second)<0){
                diry++;
            }
        }
        if(dirx*diry==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
}