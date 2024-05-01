#include<stdio.h>
#include<stdlib.h>

int main(){
    int testno,n,max,loc,count=0,prev,slope, prev_slope;
    scanf("%d",&testno);
    for(int i=0;i<testno;i++){
        scanf("%d",&n);
        max =0,count =0;
        int arr[n];
        for(int i =0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]>max){
                max = arr[i];
                loc = i;
            }
        }
        if(loc ==n-1)
            prev = arr[0];
        else    
            prev= arr[loc+1];
        if(loc+2<=n-1){
            if(arr[loc+1]>arr[loc+2]){
                prev_slope = -1;
            }
            else if(arr[loc+1]==arr[loc+2])
                prev_slope =0;
            else 
                prev_slope=1;
        }
        if(loc+2==n){
            if(arr[loc+1]>arr[0]){
                prev_slope = -1;
            }
            else if(arr[loc+1]==arr[0])
                prev_slope =0;
            else 
                prev_slope=1;
        }
        else{
            if(arr[0]>arr[1]){
                prev_slope = -1;
            }
            else if(arr[0]==arr[1])
                prev_slope =0;
            else 
                prev_slope=1;
        } 

        for(int i =loc+1;i!=loc;){
            if(i>=n-1)
                i=0;
            if(arr[i]>prev)
                slope=1;
            else if(arr[i]=prev) 
                slope=0;
            else 
                slope=-1;
            if (slope*prev_slope<0)
                count++;
            printf("%d\t",prev_slope);
            prev_slope = slope;             
            i++;             
        }
        if(count>=1)
            printf("\nNO");
        else 
            printf("\nYes");
    }
}