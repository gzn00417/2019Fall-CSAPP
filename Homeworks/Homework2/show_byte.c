#include<stdio.h>
 
typedef unsigned char* byte_pointer;
 
void show_bytes(byte_pointer ch, int len){
	printf("show bytes:");
	int i;
    for (i = 0; i < len; i++)
        printf ("%.2x ", ch[i]);
    printf("\n");
}
void show_short(short x)
{
	show_bytes((byte_pointer) &x,sizeof(short ));
}
void show_long(long x)
{
	show_bytes((byte_pointer) &x,sizeof(long ));
}
void show_double(double x)
{
	show_bytes((byte_pointer) &x,sizeof(double ));
}
int main()
{
	int x = 1;
	short y = 32767;
	long  z = 32767;
	double d = 3.14;
	printf("linux:\nshow number: %d %d %ld %f\n",x,y,z,d);
	show_bytes((byte_pointer) &x,sizeof(int ));
	show_short(y);
	show_long(z);
	show_double(d);
	return 0;
}