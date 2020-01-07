#include<stdio.h>
#include<string.h>
#define N 80

int main(void)
{
    int a, b, i, j, n;
    char str[N];
    printf("输入字符串（十进制）：");
    scanf("%s",str,N);
    a = 0;
    i = strlen(str);
    for(j=0;j<i;j++)
    {
        b = (int)str[j]-48;
        for(n=1;n<i-j;n++)
        {
            b = b*10;
        }
        a = a+b;
    }
    printf("字符串：%s 变换为正数：%d\n",str, a);
    return 0;
}
