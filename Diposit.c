#include<stdio.h>
// import Libraly
void manin(){
    // variable
    int money;
    // Input money 
    printf("Please input your money : ");
    scanf("%d", &money);
    // condition
    if (money<=20000 && money%100==0){
        money = 50000-money;
        printf("Total : %d",&money);
    }
    else{
        printf("Incorrect amount");
    }
}