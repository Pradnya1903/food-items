#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter a number \n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("food item : noodles\n");
printf("price : RS 200");
break;
case 2:
printf("food item : cake\n");
printf("price : RS 300");
break;
case 3:
printf("food item :burger\n");
printf("price : RS 90");
break;
case 4:
printf("food item : sandwitch\n");
printf("price : RS 100");
break ;
case 5:
printf("food item : custurd\n");
printf("price : RS 120");
break;
default:
printf("please enter number between 1 to 5");
}
getch();
}
