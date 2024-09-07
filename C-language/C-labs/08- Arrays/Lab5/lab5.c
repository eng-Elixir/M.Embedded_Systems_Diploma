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
	float matrix[3][3],Tmatrix[3][3];
	int i, j ;
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf(" Enter Item (%d , %d) = ",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
	}

	for (i=0; i<3; i++)
	{
		printf("\n ");
		for (j=0; j<3; j++)
		{
			printf(" %0.2f ",matrix[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			Tmatrix[i][j]=matrix[j][i];
		}
	}
	printf("\n------------------- ");
	for (i=0; i<3; i++)
	{
		printf("\n ");
		for (j=0; j<3; j++)
		{
			printf(" %0.2f ",Tmatrix[i][j]);
		}
	}

}

