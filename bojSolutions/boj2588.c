#include <stdio.h>
int main(){
    int fir,sec;//sec to split
    scanf("%d\n%d",&fir,&sec);
    printf("first number : %d\nsecond number : %d\nmult : %d\n",fir,sec,fir*sec);
    // Amod10 => digit of 10^0
    // Adiv10 => remove digit of 10^0 and move digit to right
    int ans=fir*sec;
    for(int i =3; i>0 ;i--,sec /= 10)printf("%d\n",sec%10*fir);
    printf("%d",ans);
    
}
