#include<stdio.h>
int main()
{
    int a[3][3]={
        {5, 15, 20},
        {25, 30, 35},
        {40, 45, 50},
       };
       int i, j, sum=0;

    for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
    {
      if(i==j)
      {
          sum=sum+a[i][j];
      }
    }
    }
    printf("Sum of Diagonal: %d", sum);
 return 0;
}
