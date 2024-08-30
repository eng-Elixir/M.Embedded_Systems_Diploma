/*
 * lab9.c
 *  Created on: Aug 30, 2024
 *      Author: Sabri
 *  this code aim to calculate the average
 *  of students degrees.
 */

# include <stdio.h>
# include <conio.h>

int main()
{
	float A=0,B=0,C=0;
	char X;
	do
	{
		printf("\nEnter the number =  ");
		fflush(stdout);
		scanf("\t%f",&A);
		printf("Enter the number =  ");
		fflush(stdout);
		scanf("\t%f",&B);
		printf("Enter the number =  ");
		fflush(stdout);
		scanf("\t%f",&C);

		if((A>B) && (A>C))
		{
			printf("\nThe largest number = %f ",A);
		}
		else if((B>A) && (B>C))
		{
			printf("\nThe largest number = %f ",B);
		}
		else
		{
			printf("\nThe largest number = %f ",C);
		}
		printf("\nEnter y to try again ");
		fflush(stdout);
		scanf("\t%c",&X);
	}
	while (X == 'y');


}
