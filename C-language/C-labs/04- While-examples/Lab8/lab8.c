/*
 * lab8.c
 *  Created on: Aug 28, 2024
 *      Author: Sabri
 *  this code aim to calculate the average
 *  of students degrees.
 */

# include <stdio.h>

int main()
{
	int studentNum=1;
	float sum=0,degree=0;
	printf("Enter negative value to Quit or Enter to continue \n");
	while (1)
	{
		printf("Enter the student (%d) degree =  ",studentNum);
		fflush(stdout);
		scanf("%f",&degree);
		if(degree < 0 || degree > 100 )break;
		sum =sum+degree;
		studentNum++;
	}
	printf("Average = %f",sum/(studentNum-1));
	return 0;
}
