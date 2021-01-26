#include <stdio.h>
//  ส่วนที่ (1) ดึง Library ของโปรแกรม

void main(){
// ส่วน (2) การสร้าง Funtion หลัก

// =================== ตัวแปร ===================
// ทำระบบสมัครสมาชิก เก็บ username, email, password, phone
//   char      char          char          char           char
//  int             int     int         int 

char Firstname[30], Lastname[30], Username[20], Passworld[50], Email[30];
int ID_student[13], Age[2], Weight[5], High[5];

// =================== ตัวแปร ===================

// =================== การรับข้อมูล ===================
printf("You ID student is : ");
scanf("%d",&ID_student);

printf("You firstname is : ");
scanf("%s",&Firstname);

printf("You lastname is : ");
scanf("%s",&Lastname);

printf("You age is : ");
scanf("%d",&Age);

printf("You username is : ");
scanf("%s",&Username);

printf("You passworld is : ");
scanf("%s",&Passworld);

printf("You email is : ");
scanf("%s",&Email);

printf("You weight is : ");
scanf("%d",&Weight);

printf("You high is : ");
scanf("%d",&High);

// =================== การรับข้อมูล ===================

// =================== การแสดงผลข้อมูล ===================

printf("Success \n");
printf("You ID student is : %d \n",&ID_student);
printf("You firstname is : %s \n",&Firstname);
printf("You lastname is : %s \n",&Lastname);
printf("You age is : %d \n",&Age);
printf("You username is : %s \n",&Username);
printf("You passworld is : %s \n",&Passworld);
printf("You email is : %s \n",&Email);
printf("You weight is : %d",&Weight);
printf("You high is : %d",&High);

// =================== การแสดงผลข้อมูล ===================

return 0;

}