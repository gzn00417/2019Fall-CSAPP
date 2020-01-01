#include <stdio.h>
#include <stdlib.h>

int add_out(unsigned x, unsigned y){return x + y >= x;}

unsigned uhp(unsigned x, unsigned y)
{
    int w = sizeof(int)<<3, i;
    unsigned high = 0;
    unsigned sum = (y&0x1)?x:0;
    for(i=1; i<w; i++)
	{
        if( (y>>i) & 0x1 ) 
		{
            high += x>>(w-i);
            if(!add_out(sum, x<<i)) high++;
            sum += (x<<i);
        }
    }
    return high;
}

int main()
{
	unsigned a,b;
	scanf("%x%x",&a,&b);
	printf("%x\n",uhp(a,b));
	return 0;
}