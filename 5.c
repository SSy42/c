#include<stdio.h>
int main()
{
    int m1,m2,h1,h2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    if(m1<m2)
    {
        m1+=60;
        h1--;
    }
    printf("时差为%d小时%d分钟\n", h1-h2, m1-m2);
    return 0;
}
