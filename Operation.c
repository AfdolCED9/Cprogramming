#include <stdio.h>
#include <stdbool.h>
//---------------------- import Libraly ---------------------- //

void main(){

    //---------------------- ประกาศตัวแปร ----------------------//
        int num1 ,num2 ,sum;
        float result;
        bool total[10];
        // boolเก็บได้แค่ true(1) false(0)

    //---------------------- ประกาศตัวแปร ----------------------//

    //---------------------- Input ----------------------//

    // printf("Input num1 : ");
    // scanf("%d",&num1);
    // printf("Input num2 : ");
    // scanf("%d",&num2);
    //---------------------- Input ----------------------//

    // ---------------------- Process ----------------------//
    // result = num1 % num2;
    // total[0] = 2 < 1;
    // total[1] = 200 <= 201;
    // total[2] = 2 == 2;
    // total[3] = 2 != 2;

    total[4] = !(3 < 5) && (6 >= 7);

    total[5] = !((5 <= 20)||(6 > 9));
    
    sum = 5;
    sum += 10;

    // ---------------------- Process ----------------------//
    
    // ---------------------- Output ----------------------//
    // printf("Total1 : %d \n", total[0]);
    // printf("Total2 : %d \n", total[1]);
    // printf("Total3 : %d \n", total[2]);
    // printf("Total4 : %d \n", total[3]);
    printf("Total4 : %d \n", total[4]);
    printf("Total5 : %d \n", total[5]);
    printf("sum : %d \n",sum);
    // ---------------------- Output ----------------------//

}