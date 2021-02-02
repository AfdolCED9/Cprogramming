#include<stdio.h>
void manin(){
    
    char choice;

    printf("Please input your drink : ");
    scanf("%c", &choice);

    switch (choice){
        case'c':
            printf("Coke!!");
        break;

        case'p':
            printf("Pepsi!!");
        break;

        case'f':
            printf("Fanta!!");
        break;        
        default:
            printf("ERROR");
        break;
    }
}