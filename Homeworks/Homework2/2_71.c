#include <stdio.h>
#include <stdlib.h>

int Merge(unsigned a,int b)
{
	int x=a<<((3-b)<<3);
	b=sizeof(int)<<3;
	return x>>b;
}

int main()
{
	unsigned a;
	int b;
	scanf("%x %d",&a,&b);
	printf("%x\n",Merge(a,b));
	return 0;
}