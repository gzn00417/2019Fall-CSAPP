#include <stdio.h>
#include <stdlib.h>

float_bits float_half(float_bits f)
{
	unsigned sign=f>>31;
	unsigned exp=(f>>23) & 0xff;
	unsigned frac=f&0x7fffff;
	if( exp == 0xff )
		return f;
	else if(exp==0)
		return (sign<<31) | ((frac>>1)+(1 & (frac&3==3)));
	else if(exp==1)
		return (sign<<31) | ((exp-1)<<23) | ( (frac>>1)&0x400000);
	else
		return (sign<<31) | ((exp-1)<<23) | frac;
}

int main()
{
	float_bits x;
	scanf("%f",&x);
	printf("%f\n",float_half(x));
	return 0;
}