/*
 *
 *  Created on: Sep 8, 2024
 *      Author: Sabri
 *      Homework 3
 */
# include <stdio.h>

int main()

{
	int Row,Column,i,j;
	printf(" Enter Matrix Row number = ");
	scanf("%d",&Row);
	printf(" Enter Matrix Column number = ");
	scanf("%d",&Column);
	float Matrix[Row][Column],Tmatrix[Column][Row];

	for (i=0; i<Row; i++)
	{
		for(j=0; j<Column; j++)
		{
			printf(" Enter Item (%d , %d) = ",i+1,j+1);
			scanf("%f",&Matrix[i][j]);
		}
	}
	for (i=0; i<Column; i++)
	{
		for (j=0; j<Row; j++)
		{
			Tmatrix[i][j]=Matrix[j][i];
		}
	}
	printf(" \n ----------------\n Input Matrix");
	for (i=0; i<Row; i++)
	{
		printf("\n ");
		for (j=0; j<Column; j++)
		{
			printf(" %0.2f ",Matrix[i][j]);
		}
	}
	printf(" \n ----------------\n Transpose Matrix");
	for (i=0; i<Column; i++)
	{
		printf("\n ");
		for (j=0; j<Row; j++)
		{
			printf(" %0.2f ",Tmatrix[i][j]);
		}
	}

}

