#include<stdio.h>
int main()
{
    int price=0;
    int amount=0;
    int a=0;
    printf("请输入金额：(元)") ;
    scanf("%d",&price);
    printf("请输入面值：（元）");
    scanf("%d",&amount);
    a=amount-price;
    printf("找零金额为%d元",a);
    return 0;

}
