#include <stdio.h>
//  ส่วน ดึง Library ของโปรแกรม

void main(){
// ส่วน การสร้าง Funtion หลัก

// =================== ตัวแปร ===================
// ทำระบบสมัครสมาชิก เก็บ username, email, password, phone
//                      char[]   char[] char[]    char[]

char username[20], email[50], password[20], repassword[20];
int phone[10];

// =================== ตัวแปร ===================

// =================== การรับข้อมูล ===================
printf("You username is : ");
scanf("%s",&username);

printf("You email is : ");
scanf("%s",&email);

printf("You password is : ");
scanf("%s",&password);

printf("You repassword is : ");
scanf("%s",&repassword);

printf("You phone is : ");
scanf("%d",&phone);

// =================== การรับข้อมูล ===================

// =================== การแสดงผลข้อมูล ===================

printf("Success \n");
printf("You username is : %s",username);
return 0;

}