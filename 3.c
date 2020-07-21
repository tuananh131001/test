#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number[10];
  int average=0;

  //print 10 random integers
  for(int i=0 ;i <10;i++)
  {
    printf("%2d ", number[i]= rand() % (100 + 1 - 0) + 0);
  }
  printf("\n");
  for(int i=0 ;i <10;i++)
  {
    average = average+number[i];
  }
  printf("average : %d",average/10);
  return 0;
}
