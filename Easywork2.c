#include<stdio.h>
// Import Libraly

void main(){

    int std1_match, std2_programming, std3_science;

    printf("***********************************\n");
    printf("Please input score\n");
    printf("Subject-> 1.Match 2.Programming 3.Science\n");
    printf("Student 1 : ");
    scanf("%d %d %d\n", &std1_match, &std2_programming, &std3_science);

    printf("Score match %d program %d science %d",std1_match ,std2_programming ,std3_science);

    return 0 ;
}