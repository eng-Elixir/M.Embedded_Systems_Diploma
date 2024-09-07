/*
 * Main.c
 *
 *  Created on: Sep 7, 2024
 *      Author: Sabri
 *      Array Example
 */
# include <stdio.h>

int main()

{
	float y, X[]= {5,16,22,3.5,15};
	int i ;
	for (i=0; i<5; i++)
	{
		y = 5*X[i]*X[i]+3*X[i]+2;
		printf("  y(%0.2f)= %0.2f \n",X[i],y);
	}



}

