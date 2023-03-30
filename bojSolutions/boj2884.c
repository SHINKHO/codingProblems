#include <stdio.h>
int main(){
	int iH,iM;
	scanf("%d %d",&iH,&iM);
	iM-=45;
	if(iM<0){
		iH--;
		iM+=60;
	}
	if(iH<0){
		iH+=24;
	}
	printf("%d %d",iH,iM);
}
