#include<stdio.h>

int main()
{
	int x=0x89ABCDEF,y=0x76543210;
	printf("%02x\n",(x&0x000000FF)|(y&0xFFFFFF00));
	return 0;
}