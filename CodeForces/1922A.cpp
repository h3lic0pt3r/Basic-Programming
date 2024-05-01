#include<bits/std++.h>

using namespace std;

int main(){
    int testno;
    cin>>testno;
    for(int tests =0;tests<testno;tests++){
        int n,c_chk =0;
        cin >> n;
        char a[n],b[n],c[n];
        cin>>a>>b>>c;
        for(int i =0;i<n;i++){
            if(int(a[i])>=97&&a[i]==c[i]){
                c_chk++;
                continue;
            }
            if(int(b[i]>=97)&&b[i]==c[i]){
                c_chk++;
                continue;
            }
            if(int(a[i])<97&& char(int(a[i])+32)!=c[i]){
                c_chk++;
                continue;
            }
            if(int(b[i])<97&& char(int(b[i])+32)!=c[i]){
                c_chk++;
                continue;
            }
        }
        if(c_chk==n){
            cout<<"NO"<<endl;
            return 0;
        }
        else
            cout<<"YES"<<endl;
    }
}