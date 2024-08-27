/*
 * lab2.c
 *
 *  Created on: Aug 25, 2024
 *      Author: Sabri
 *  this code aim to compairing three numbers
 *
 */


# include <stdio.h>

 int main()
 {
	 float A,B,C;
	 printf("Enter number A = ");
	 fflush(stdout);
	 scanf("%f",&A);
	 printf("\nEnter number B = ");
	 fflush(stdout);
	 scanf("%f",&B);
	 printf("\nEnter number C = ");
	 fflush(stdout);
	 scanf("%f",&C);

	 if((A > B) && (A > C))
	 {
		 printf("\nThe largest number = %f",A);
	 }
	 else if((C > B) && (C > A))
	 {
		 printf("\nThe largest number = %f",C);
	 }
	 else
	 {
		 printf("\nThe largest number = %f",B);
	 }
 }

