#include<stdio.h>
#include<string.h>
#define N 80

int main(void)
{
    int i, j, n, m, k;
    double a, b;
    char str[N];
    printf("输入字符串（十进制）：");
    scanf("%s",str,N);
    a = 0;
    for(i=0;str[i]!='.';i++)            //判断小数点前位数
    {

    }
    for(j=0;j<i&&str[j]!='.';j++)       //将字符串整数部分转换成浮点数
    {
        b = (double)str[j]-48;
        for(n=1;n<i-j;n++)
        {
            b = b*10;
        }
        a = a+b;
    }
    i = strlen(str);                     //将字符串小数点后的字符转换为浮点数
    for(m=j+1;m<i;m++)
    {
        b = (double)str[m]-48;
        for(k=0;k<m-j;k++)
        {
            b = b*0.1;
        }
        a = a+b;
    }
    printf("字符串：%s 变换为浮点数：%f\n",str, a);
    return 0;
}
