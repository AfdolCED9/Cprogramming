#include <stdio.h>
#include <stdbool.h>

void main(){

    int sum1,sum2,sum3,std1_math,std2_programming,std3_science,std4_math,std5_programming,std6_science,std7_math,std8_programming,std9_science;
    float result;
    bool total[10];
    printf("*********************************\n");
    printf("please input score in same line order by subject:\n");
    printf("Subject => 1.math 2.programming 3.science \n");
    printf("Subject 1 : ");
    scanf("%d %d %d",&std1_math,&std2_programming,&std3_science);
    printf("Subject 2 : ");
    scanf("%d %d %d",&std4_math,&std5_programming,&std6_science);
    printf("Subject 3 : ");
    scanf("%d %d %d",&std7_math,&std8_programming,&std9_science);
    printf("*********************************\n");

    sum1 = std1_math + std2_programming + std3_science;
    sum2 = std4_math + std5_programming + std6_science;
    sum3 = std7_math + std8_programming + std9_science;

    printf("Total Score:\n");
    printf("Subject 1 : %d \n", sum1);
    printf("Subject 2 : %d \n", sum2);
    printf("Subject 3 : %d \n", sum3);
    printf("*********************************\n");
    //printf("score math %d program %d science %d:",std1_math,std2_programming, std3_science);
    



}