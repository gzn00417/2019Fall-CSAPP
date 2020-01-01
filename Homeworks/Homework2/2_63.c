#include<stdio.h>
unsigned srl(unsigned x,int k)
{
	unsigned xsra = (int) x >> k;
	return (xsra&(~(-1<<(8*sizeof(int)-k))));
}
int sra(int x,int k)
{
	int xsrl = (unsigned) x >> k;
	int flag=(xsrl&(1<<(8*sizeof(int)-k-1)));
	if (flag) return (xsrl|(-1<<(8*sizeof(int)-k))); else return xsrl;
}
int main()
{
	int x1,k;
	for(;;)
	{
		scanf("%x %d",&x1,&k);
		unsigned x2;
		x2=(unsigned)x1;
		printf("逻辑右移：%02x>>%d ->%02x\n",x2,k,srl(x2,k));
		printf("算术右移：%02x>>%d ->%02x\n",x1,k,sra(x1,k));
	}
	return 0;
}