#include<stdio.h>
#include<string.h>
#define N 80

int main(void)
{
    int a, b, c, i, j, k, n, m;
    int num[N];
    char str[N];
    printf("输入正数（十进制）：");
    scanf("%d",&a);
    n = a;
    i = 1;
    while(n!=0)
    {
        n = n/10;
        if(n!=0)
            i++;
    }
    for(j=0;j<i;j++)
    {
        c = 1;
        for(m=1;m<i-j;m++)
        {
            c = c*10;
        }
        num[j] = c;
        if(j==0)
            str[j] = (char)(a/c+48);
        else
        {
            b = a;
            for(k=0;k<j;k++)
            {
                b = b-((int)str[k]-48)*num[k];
            }
            str[j] = (char)(b/c+48);
        }
    }
    str[i] = '\0';
    printf("输入正数：%d 变换为字符串：%s\n",a, str);
    return 0;
}
