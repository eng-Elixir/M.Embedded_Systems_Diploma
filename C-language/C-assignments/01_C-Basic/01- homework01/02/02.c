/*
EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################
*/

# include <stdio.h>

int main()
{
   int num;
   printf("Enter a integer:");
   fflush(stdout);
   scanf("\t%d",&num);
   printf("\nYou enterd: %d",num);
   
}
