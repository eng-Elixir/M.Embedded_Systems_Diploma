/*
 * lab10.c
 *  Created on: Aug 30, 2024
 *      Author: Sabri
 *  this code like a game
 *  if first value bigger than second 
 *  value the code still working.
 */

# include <stdio.h>

int main()
{
	float A=0,B=0;

		again:
		printf("\nEnter the number =  ");
		fflush(stdout);
		scanf("\t%f",&A);
		printf("Enter the number =  ");
		fflush(stdout);
		scanf("\t%f",&B);
		if(A>B)
		{
			printf("\ntry again ");
			goto again;
		}

    printf("\nthe end ");

}
