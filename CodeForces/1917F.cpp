#include<bits/stdc++.h>

using namespace std;

int s;

void isSubsetSum(int set[], int n, long long int sum, int count,int * out,int *out2)
{
    if (sum == 0){
        if(count==1){ 
            if(s!=1){
                *out=0;
                return;
            }
        }
        
        else if (count==2){
            if(s>2){*out =0;
                return;
            }
        }
        
        else if(count<=(s*((s/2)-1))+((s%2)*2*(s/2))){
            *out = count;
            return;
        }
        else {
            *out =0;
            return;
        }
    }
    if (n == 0){
        *out = 0;
        return;
    }

    if (set[n - 1] > sum){
        isSubsetSum(set, n - 1, sum, count,out,out2);
        return;
    }
 
    isSubsetSum(set, n - 1, sum, count,out,out2);
    isSubsetSum(set, n - 1, sum - set[n - 1], count+1,out,out2);
    return;
}

int main(){
    int testno,n,chk,min;
    long long int d;
    cin>>testno;
    for(int tests=0;tests<testno;tests++){
        chk=0;
        cin>>n>>d;
        s=n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int outa, outb;
        isSubsetSum(arr,n,d,0,&outa,&outb);

        cout<<outa<<" "<<outb<<endl;

        if(outa||outb){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}