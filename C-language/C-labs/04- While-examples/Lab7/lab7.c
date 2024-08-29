/*
 * lab7.c
 *  Created on: Aug 28, 2024
 *      Author: Sabri
 *  this code aim to calculate the summation
 *  odd values between 1 & 99.
 */

# include <stdio.h>

int main()
{
	int i=1,sum=0;
	while (i<= 99)
	{
		sum=sum +i;
		i=i+2;
	}

	printf("The Summation of odd Number = %d ",sum);

	return 0;
}
