/*

EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/

# include <stdio.h>

int main()
{
   float A,B;
   printf("Enter value of a:");
   fflush(stdout);
   scanf("\t%f",&A);
   printf("Enter value of b:");
   fflush(stdout);
   scanf("\t%f",&B);
   printf("\nAfter swapping, value of a = %f",((A+B)+(B-A))/2);
   printf("\nAfter swapping, value of b = %f",((A+B)+(A-B))/2);
   
}
