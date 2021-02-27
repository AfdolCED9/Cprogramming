#include<stdio.h>
int number = 0;
void main(){
    while (number != 30){
        printf("Please enter number : ");
        scanf("%d",&number);
        if (number==30){
            printf("Correct");
            break;
        }
        printf("Incorrect\n");
    } 
}