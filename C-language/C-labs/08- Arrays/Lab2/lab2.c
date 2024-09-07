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
	float degrees[10];
	int i ;
	for (i=0;i<10;i++)
	{
		printf("Enter student %d degree = ",i+1);
		scanf("%f", &degrees[i]);
	}
	
	printf("-------------------------------------- ");
	
	for (i=0;i<10;i++)
	{
		printf("\nStudent %d degree = %0.2f ",i+1,degrees[i]);
	}


}

