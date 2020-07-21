#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number[10];
  int average=0;
  int odd = 0;
  int count_number =0;

  //print 10 random integers
  for(int i=0 ;i <10;i++)
  {
    printf("%2d ", number[i]= rand() % (100 + 1 - 0) + 0);
  }
  printf("\n");
  //calculate the average
  for(int i=0 ;i <10;i++)
  {
    average = average+number[i];
  }
  printf("Average : %d",average/10);//print out
  //make a line
  printf("\n");
  //calculate odd number
  for(int i=0 ;i <10;i++)//loop to i=9
  {
      if(number[i]%2 !=0) //if number cannot % 2,its a odd
      {
         odd++;
      }
  }

  printf("Amount of odd number are %d",odd);
  printf("\n");
  for(int i=0 ;i <10;i++)
  {
      if(number[i] >5)
      {
         count_number++;
      }
  }
  printf("Number greater than 5 are %d",count_number);
  return 0;
}
