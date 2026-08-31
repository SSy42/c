#include <stdio.h>
int main() 
{
    printf("请分别输入身高英尺与英寸，"
        "如输入\"5 10\"表示5英尺10英寸\n");
    double foot,inch;
    scanf("%lf %lf",&foot,&inch);
    printf("身高是%f米\n",(foot+inch/12)*0.3048);
    return 0;
}
