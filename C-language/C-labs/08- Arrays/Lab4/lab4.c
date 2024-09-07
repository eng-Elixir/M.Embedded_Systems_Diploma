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
	float Sum, degrees[3][4];
	int i, j ;
	for (i=0; i<3; i++)
	{
		Sum=0;
		for(j=0; j<3; j++)
		{
			printf(" Enter %d student mark in %d exam = ",i+1,j+1);
			scanf("%f",&degrees[i][j]);
			Sum = Sum + degrees[i][j];
		}
		degrees[i][4]=Sum / 3;
	}

	for (i=0; i<3; i++)
	{
		printf("\n The average of student %d = %0.2f", i+1, degrees[i][4]);
	}

}

