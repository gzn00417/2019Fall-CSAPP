#include<stdio.h>

int main(void)
{
    float a;
    printf(" ‰»Î∏°µ„ ˝£®float£©£∫");
    scanf("%f",&a);
    printf("%f/0 = %f\n%f/1.4e-45 = %f",a,a/0,a,a/1.4e-45);
    return 0;
}
