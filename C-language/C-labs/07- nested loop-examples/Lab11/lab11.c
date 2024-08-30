/*
 * lab11.c
 *  Created on: Aug 30, 2024
 *      Author: Sabri
 *  nested loop example
 */

# include <stdio.h>

int main()
{
   int i,j;
   printf("\n  ");
   for(i=0;i<=9;)
   {
      for(j=i;j<=9;)
      {
         printf("%d",j);
         j++;
      }
      printf("\n  ");
      i++;
   }

}
