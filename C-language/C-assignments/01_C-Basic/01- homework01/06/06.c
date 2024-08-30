/*
EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################
*/

# include <stdio.h>

int main()
{
   float A,B,C;
   printf("Enter value of a:");
   fflush(stdout);
   scanf("\t%f",&A);
   printf("Enter value of b:");
   fflush(stdout);
   scanf("\t%f",&B);
   C=A;
   A=B;
   B=C;
   printf("\nAfter swapping, value of a = %f",A);
   printf("\nAfter swapping, value of b = %f",B);
   
}
