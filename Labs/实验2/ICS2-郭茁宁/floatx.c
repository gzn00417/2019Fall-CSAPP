#include<stdio.h>
#include<float.h>

int main(void)
{
    float a, b, c, d, e, f, g;
    a = +0;
    b = -0;
    c = 1.4e-45;
    d = FLT_MAX;
    e = FLT_MIN;
    f = 1.0/0.0;
    g = 1.0/0.0*0.0;
    printf("+0(十进制):%f;(十六进制):%x\n",a,a);
    printf("-0(十进制):%f;(十六进制):%x\n",b,b);
    printf("最小浮点正数(十进制):%f;(十六进制):%x\n",c,c);
    printf("最大浮点正数(十进制):%f;(十六进制):%x\n",d,d);
    printf("最小正的规格化浮点数(十进制):%f;(十六进制):%x\n",e,e);
    printf("正无穷(十进制):%f;(十六进制):%x\n",f,f);
    printf("NaN(十进制):%f;(十六进制):%x\n",g,g);
}
