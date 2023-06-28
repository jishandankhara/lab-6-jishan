//6.1 Q3 write a program to print 1 to n using a do while loop.


#include<stdio.h>
#include<conio.h>

void main(){
int n;
int a = 1;
clrscr();
 printf("enter any number:");
 scanf("%d",&n);
do{
   printf("%d\n",a);
   a++;
}while(a<=n);
getch();}
