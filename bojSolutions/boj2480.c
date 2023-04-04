#include <stdio.h>
int main(){
	int in[3];
	scanf("%d %d %d",&in[0],&in[1],&in[2]);
	
	if(in[0]==in[1]&&in[1]==in[2]){
		printf("%d",in[0]*1000+10000); 
	}else if(in[0]==in[1]||in[1]==in[2]){
		printf("%d",in[1]*100+1000);
	}else if(in[0]==in[2]){
		printf("%d",in[2]*100+1000);
	}else{
		int hugest;
		if(in[0]>in[1] && in[0]>in[2]){
			printf("%d",in[0]*100);
		}else if(in[1]>in[0] && in[1]>in[2]){
			printf("%d",in[1]*100);
		}else if(in[2]>in[0] && in[2]>in[1]){
			printf("%d",in[2]*100);
		}else{
			printf("invalid input");
		}
	}
	return 0;
}
