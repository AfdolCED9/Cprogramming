#include <stdio.h>
//  ส่วน ดึง Library ของโปรแกรม

void main(){
// ส่วน การสร้าง Funtion หลัก

// =================== ตัวแปร ===================
// ทำระบบสมัครสมาชิก เก็บ username, email, password, phone
//                      char[]   char[] char[]    char[]

char Name[20], Lastname[20], Username[20], Passworld[20], Email[20];
int ID_student[13], Age[2], Weight[20], High[20];

// =================== ตัวแปร ===================

// =================== การรับข้อมูล ===================
printf("You ID student is : ");
scanf("%d",&ID_student);

printf("You name is : ");
scanf("%s",&Name);

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
printf("You name is : %s \n",&Name);
printf("You lastname is : %s \n",&Lastname);
printf("You age is : %d \n",&Age);
printf("You username is : %s \n",&Username);
printf("You passworld is : %s \n",&Passworld);
printf("You email is : %s \n",&Email);

return 0;

}