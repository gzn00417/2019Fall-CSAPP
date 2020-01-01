#include <stdio.h>
#include <stdlib.h>

int mul3div4(int x)
{
	return (x>>2)+(x>>1)+((((x<<1)&0x3)+(x&0x3))>>2);
}

int main()
{
	int x;
	scanf("%d",&x);
	printf("%d\n",mul3div4(x));
	return 0;
}