#include<stdio.h>

int fib_dg1(int x);
long fib_dg2(int x);
unsigned int fib_dg3(int x);
unsigned long fib_dg4(int x);
void fib_int();
void fib_long();
void fib_unsignedint();
void fib_unsignedlong();
int main(void)
{
    int isum, n1, n2, n3, n4, num;
    long lsum;
    unsigned int uisum;
    unsigned long ulsum;
    while(1)
    {
        system ("cls");
        printf("          Select data type              \n");
        printf("               1.int                \n");
        printf("               2.long               \n");
        printf("               3.unsigned int       \n");
        printf("               4.unsigned long      \n");
        printf("Input number(input 0 exit):");
        scanf("%d",&num);
        if(num==0)
            return 0;
        switch(num)
        {
            case 1: fib_int();
                    break;
            case 2: fib_long();
                    break;
            case 3: fib_unsignedint();
                    break;
            case 4: fib_unsignedlong();
                    break;
            default: printf("Input Error!");
        }
    }
}

void fib_int()
{
    int isum, n1;
    system("cls");
    printf("int:\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n1);
        getchar();
        if(n1==0)
            break;
        isum = fib_dg1(n1);
        printf("%d\n",isum);
    }while(n1!=0);
    system("pause");
}

void fib_long()
{
    int n2;
    long lsum;
    system("cls");
    printf("long:\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n2);
        getchar();
        if(n2==0)
            break;
        lsum = fib_dg2(n2);
        printf("%ld\n",lsum);
    }while(n2!=0);
    system("pause");
}

void fib_unsignedint()
{
    int n3;
    unsigned int uisum;
    system("cls");
    printf("unsigned int:\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n3);
        getchar();
        if(n3==0)
            break;
        uisum = fib_dg3(n3);
        printf("%u\n",uisum);
    }while(n3!=0);
    system("pause");
}

void fib_unsignedlong()
{
    int n4;
    unsigned long ulsum;
    system("cls");
    printf("unsigned long:\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n4);
        getchar();
        if(n4==0)
            break;
        ulsum = fib_dg4(n4);
        printf("%lu\n",ulsum);
    }while(n4!=0);
    system("pause");
}

int fib_dg1(int x)
{
    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else
        return fib_dg1(x-1)+fib_dg1(x-2);
}

long fib_dg2(int x)
{
    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else
        return fib_dg1(x-1)+fib_dg1(x-2);
}

unsigned int fib_dg3(int x)
{
    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else
        return fib_dg1(x-1)+fib_dg1(x-2);
}

unsigned long fib_dg4(int x)
{
    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else
        return fib_dg1(x-1)+fib_dg1(x-2);
}
