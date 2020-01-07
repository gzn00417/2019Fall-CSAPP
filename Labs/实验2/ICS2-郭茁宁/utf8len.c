#include <stdio.h>
#include <string.h>
#define N 1000

int utf8len(char* a);

int main(void)
{
    char str[N];
    printf("输入字符串:\n");
    fgets(str,1000,stdin);
    printf("字符串个数为:%d",utf8len(str));
    return 0;
}

int utf8len(char* a)
{
    unsigned char* p;
    int i=0, j, num=0;
    while (a[i]!='\0') i++;
    p = (unsigned char*)&a;
    for(j=0;j<i;)
    {
        if(p[j]&0x80==0x00)
        {
            num = num+1;
            j++;
        }
        else if(p[j]&0xe0==0xc0)
        {
            num = num +1;
            j = j+2;
        }
        else if(p[j]&0xf0==0xe0)
        {
            num = num+1;
            j = j+3;
        }
        else if(p[j]&0xf8==0xf0)
        {
            num = num+1;
            j = j+4;
        }
    }
    return num;
}
