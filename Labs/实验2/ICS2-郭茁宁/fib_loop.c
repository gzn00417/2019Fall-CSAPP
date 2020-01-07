#include<stdio.h>

void fib_int();
void fib_long();
void fib_unsignedint();
void fib_unsignedlong();
int main(void)
{
    int num;
    while(1)
    {
        system ("cls");
        printf("            Select data type        \n");
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
            default: printf("Input error!");
        }
    }
}

void fib_int()
{
    int isum, fisum, i, n1, t;
    system("cls");
    printf("int\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n1);
        getchar();
        if(n1==0)
            break;
        else if(n1==1)
        {
            isum = 0;
        }
        else if(n1==2)
        {
            isum = 1;
        }
        else
        {
            fisum = 0;
            isum = 1;
            for(i=3;i<=n1;i++)
            {
                t = isum;
                isum = isum + fisum;
                fisum = t;
            }
        }
        printf("%d\n",isum);
    }while(n1!=0);
    system("pause");
}

void fib_long()
{
    int n2, i;
    long flsum, lsum, t;
    system("cls");
    printf("long:\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n2);
        getchar();
        if(n2==0)
            break;
        else if(n2==1)
        {
            lsum = 0;
        }
        else if(n2==2)
        {
            lsum = 1;
        }
        else
        {
            flsum = 0;
            lsum = 1;
            for(i=3;i<=n2;i++)
            {
                t = lsum;
                lsum = lsum + flsum;
                flsum = t;
            }
        }
        printf("%ld\n",lsum);
    }while(n2!=0);
    system("pause");
}

void fib_unsignedint()
{
    int i, n3;
    unsigned int fuisum, uisum, t;
    system("cls");
    printf("unsigned int:\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n3);
        getchar();
        if(n3==0)
            break;
        else if(n3==1)
        {
            uisum = 0;
        }
        else if(n3==2)
        {
            uisum = 1;
        }
        else
        {
            fuisum = 0;
            uisum = 1;
            for(i=3;i<=n3;i++)
            {
                t = uisum;
                uisum = uisum + fuisum;
                fuisum = t;
            }
        }
        printf("%u\n",uisum);
    }while(n3!=0);
    system("pause");
}

void fib_unsignedlong()
{
    int i, n4;
    unsigned long fulsum, ulsum, t;
    system("cls");
    printf("unsigned long:\n");
    do
    {
        printf("Input n(input 0 exit):");
        scanf("%d",&n4);
        getchar();
        if(n4==0)
            break;
        else if(n4==1)
        {
            ulsum = 0;
        }
        else if(n4==2)
        {
            ulsum = 1;
        }
        else
        {
            fulsum = 0;
            ulsum = 1;
            for(i=3;i<=n4;i++)
            {
                t = ulsum;
                ulsum = ulsum + fulsum;
                fulsum = t;
            }
        }
        printf("%lu\n",ulsum);
    }while(n4!=0);
    system("pause");
}

