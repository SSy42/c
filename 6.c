#include<stdio.h>
int main()
{
    int i,j,x,isPrime;
    j=0;
    for(i=2;j<50;i++)
    {
        isPrime = 1;
        for(x=2;x<i;x++)
        {
            if(i%x==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d ",i);
            j++;
        }
    }
    return 0;
}
