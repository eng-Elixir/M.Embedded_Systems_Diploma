/*
 * lab3.c
 *
 *  Created on: Aug 25, 2024
 *      Author: Sabri
 *  this code aim to compairing the minimum number
 *
 */


# include <stdio.h>

 int main()
 {
	 float A,B;
	 printf("Enter number A = ");
	 fflush(stdout);
	 scanf("%f",&A);
	 printf("\nEnter number B = ");
	 fflush(stdout);
	 scanf("%f",&B);

		 printf("\nThe Minimum number = %f",(A>B)?B:A);
 }
