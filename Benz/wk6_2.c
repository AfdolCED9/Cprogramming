#include<stdio.h>
void main(){
    int money;
    printf("Please input your money : ");
    scanf("%d", &money);
    if (money<=20000 && money%100==0){
        printf("Total : %d",50000-money);
    }
    else if (money>20000){
        printf("Limit 20000");
    }
    else{
        printf("Incorrect amount");
    }    
    printf("\nThank you");
}