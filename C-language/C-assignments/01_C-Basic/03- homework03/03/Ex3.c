/*
 *
 *  Created on: Sep 7, 2024
 *      Author: Sabri
 *      Homework3
 */
# include <stdio.h>

int main()

{
	unsigned short i,j;
	float Mata[2][2], Matb[2][2], Matc[2][2];
	for (i=0; i<2 ; i++)
	{
		for(j=0; j<2 ; j++)
		{
			printf("Enter element (%d,%d) of matrix a =",i,j);
			scanf("%f",&Mata[i][j]);
		}
	}
	for (i=0; i<2 ; i++)
	{
		for(j=0; j<2 ; j++)
		{
			printf("Enter element (%d,%d) of matrix b =",i,j);
			scanf("%f",&Matb[i][j]);
		}
	}
	for (i=0; i<2; i++)
	{
		for(j=0; j<2 ; j++)
		{
			Matc[i][j] = Mata[i][j] + Matb[i][j];
			printf(" %0.1f ",Matc[i][j]);
		}
		printf("\n");
	}


}
