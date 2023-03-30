#include <stdio.h>
int main(){
	int iH,iM,iN;
	scanf("%d %d\n%d",&iH,&iM,&iN);

	iM+=iN;
	if(iM>59){
		iH+=iM/60;
		iM%=60;
	}
	if(iH>23){
		iH%=24;
	}
	printf("%d %d",iH,iM);
}
