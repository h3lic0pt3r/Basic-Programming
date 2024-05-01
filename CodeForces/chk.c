#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc , char** argv){
	long double* arr;
	long double prev_value,peak,prev_peak ,bell_len,loc,mid_len,chk,peak_dist=0;
	int range = atoi(argv[3]);
	FILE * fp = fopen(argv[1],"r");
	FILE * fp2 = fopen(argv[1],"r");
	fscanf(fp,"%Lf %Lf",&prev_peak,&prev_value);
	while(1){
		fscanf(fp,"%Lf %Lf",&loc,&peak);
		if(peak >=prev_value*(0.97)&&peak<=prev_value*(1.03))
			break;
	}
	mid_len = (loc+prev_peak)/2;
	bell_len=loc-prev_peak;
	int i=0;
	arr = (long double*)malloc(sizeof(long double));
	while(fscanf(fp,"%Lf %Lf",&loc,&peak)!=EOF){
		chk = ((loc-prev_value)-mid_len)/prev_peak;
		if(chk>=(-range/100)&&chk<=(range/100)){
			arr =(long double*)realloc(arr,(i+1));
			arr[i]=loc;
			printf("yes");
			i++;
		}
	}
	for(int a=0;a<i;a++){
		peak_dist+= arr[a]/i;
	}
	printf("%Lf\n",peak_dist);
	return 0;
		
}