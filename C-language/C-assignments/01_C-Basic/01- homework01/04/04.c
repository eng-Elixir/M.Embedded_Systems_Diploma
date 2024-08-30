/*
EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
############################
*/

# include <stdio.h>

int main()
{
   float num1,num2;
   printf("Enter two numbers:");
   fflush(stdout);
   scanf("\t%f",&num1);
   scanf("\t%f",&num2);
   printf("\nSum: %f",num1*num2);
   
}
