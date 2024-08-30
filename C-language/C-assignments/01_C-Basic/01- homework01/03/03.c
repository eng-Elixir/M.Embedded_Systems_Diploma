/*
EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################
*/

# include <stdio.h>

int main()
{
   int num1,num2;
   printf("Enter two integer:");
   fflush(stdout);
   scanf("\t%d",&num1);
   scanf("\t%d",&num2);
   printf("\nSum: %d",num1+num2);
   
}
