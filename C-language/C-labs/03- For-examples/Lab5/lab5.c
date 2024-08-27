/*
 * lab5.c
 *  Created on: Aug 27, 2024
 *      Author: Sabri
 *  this code aim to calculate the Summation of
 *  values between 1 & 99.
 */

# include <stdio.h>

int main()
{
	int i=1,Sum=0;
	for (i=1;i<100;)
	{
		Sum=Sum+i;
		i++;
	}

	printf("Total = %d",Sum);

	return 0;
}
