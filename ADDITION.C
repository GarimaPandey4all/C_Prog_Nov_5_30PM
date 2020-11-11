#include<stdio.h>
#include<conio.h>

void main()
{
   int a, b, c; // int -> data type ; a, b: Variables
   clrscr();
   printf("Enter value for a:");
   scanf("%d", &a); // scanf--> user input read
   // %d - format specifier, & -> address of operator / Ampercant
   printf("Enter value for b:");
   scanf("%d", &b);

   c = a + b;

   printf("Addition of two numbers is: %d", c);
   getch();
}