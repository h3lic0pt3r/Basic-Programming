#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>
#include<time.h>
#include<string.h>

void srand(unsigned int seed);  //declaring the srand function

int filein(int a); //function i used to write my rand output into the files
int main(int argc,char** argv){
	int opt,seed=0,num=0,a,b,count=0;
	time_t t;
	while((opt = getopt(argc, argv, "n:s:th:")) != -1){ //get option from the getopt() method
      	switch(opt){
         	case 'n':
 			num = atoi(optarg);
			break;          		
         	case 's':
            		seed = atoi(optarg);
            		srand((unsigned) seed);
			break;
         	case 't':
         		srand((unsigned) time(&t)); 
         		break;           		
		case 'h':
			printf("\n");
			FILE * fp1 =fopen(optarg,"r");
			FILE * fp2 =fopen(argv[optind],"r");
			while(1){
				a=fgetc(fp1);
				b=fgetc(fp2);
				if(a==EOF||b==EOF)
					break;
				else if(a!='0'&&a!='1'||b!='0'&&b!='1')//code skips to the next bit if there is a space and not EOF
					continue;
				else if(a!=b)
					count+=1;
			}	
			printf("the haming distance is %d\n",count);		
      }
   }
   filein(num);
   return 0;
 }
 

 int filein(int a){	//the function used for writing to file randbits.txt
 	if(a>0){
		FILE * fp = fopen("randbits.txt" , "w");
 		for(int i=0;i<a;i++){
 		fprintf(fp,"%d",rand()%2);
 		}
	}
 }