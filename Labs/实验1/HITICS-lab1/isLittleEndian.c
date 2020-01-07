#include<stdio.h>
#include<stdlib.h>
union code
{
    int a;
    char c;
}n;

int isLittleEndian()
{
    n.a = 0x4422;
    if (n.c==0x22) return 0;
    return 1;
}

int main(void)
{
    if (isLittleEndian()) printf("Big endian\n");
	else printf("Little endian\n");
    return 0;
}
