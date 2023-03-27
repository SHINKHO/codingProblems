#include <stdio.h>

int main(){
    int in;
    scanf("%d",&in);
    if(90<=in&&in<=100){
        printf("A");
    }else if(80<=in&&in<=89){
        printf("B");
    }else if(70<=in&&in<=79){
        printf("C");
    }else if(60<=in&&in<=69){
        printf("D");
    }else{
        printf("F");
    }
}
