#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("enter any number:");
scanf("%d",&a);
printf("odd numbers are as\n");
while(a>=1) {
   if (a % 2 != 0){
   printf("%d\n",a); }
   a--;
   }
   getch();
   }