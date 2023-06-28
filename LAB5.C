//writ a program to print leap years between two given numbers using a while ioop.
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("enter frist year:");
scanf("%d",&a);
printf("enter second year:");
scanf("%d",&b);
printf("leap years between %d ane %d are\n",a,b);
for(c=a; c<=b;c++){
  if(((a%4==0)&&(a%100!=0))||(a%400 == 0));
  }{
  printf("%d\n",c);
  }
getch();
}