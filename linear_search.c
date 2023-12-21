#include<stdio.h>
int main()
{
    int a[30]={40, 45, 50, 55, 60, 65}, i,sum=0;
    for(i=0; i<=5; i++)
    {
    if(a[i]%2!=0)
        {
        sum=sum+a[i];;
        }
    }

    printf("%d", sum);
return 0;
}
