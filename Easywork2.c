#include<stdio.h>
// Import Libraly

void main(){

    int match[5];
    int programming[5];
    int science[5];

    printf("***********************************\n");
    printf("Please input score\n");
    printf("Subject-> 1.Match 2.Programming 3.Science\n");
    
    // Student 1
    printf("Student 1 : ");
    scanf("%d %d %d\n", &match[1], &programming[1], &science[1]);
    
    // Student 2
    printf("Student 2 : ");
    scanf("%d %d %d\n", &match[2], &_programming[2], &_science[2]);
    
    // Student 3
    printf("Student 3 : ");
    scanf("%d %d %d\n", &_match[3], &_programming[3], &_science[3]);

    // Total Process
    _match[4] = _match[1] +_programming[1] _science[1] ;
    _programming[4] = _match[2] + programming[2] _science[2] ;
    _science[4] = smatch[3] + _programming[3] _science[3] ;

    // Total screen
    printf("Student 1 : %d \n Student 2 : %d \n Student 3 : %d \n",_match[4] ,_programming[4] ,_science[4]);
}