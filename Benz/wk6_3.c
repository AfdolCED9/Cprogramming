#include<stdio.h>
void main(){
    float byte;
    printf("Please input you byte : ");
    scanf("%f", &byte);

    if (byte<1024){
        printf("Size : %.2lf", byte);
    }
    else if (byte<1048576){
        printf("Size : %.2lf KB", byte/1024);
    }
    else if (byte<1073741824){
        printf("Size : %.2lf MB", byte/1048576);
    }
    else {
        printf("Size : %.2lf GB", byte/1073741824);
    }
    printf("\nThank you");
}