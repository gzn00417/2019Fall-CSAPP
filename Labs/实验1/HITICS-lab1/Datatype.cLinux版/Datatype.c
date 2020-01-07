#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student1
{
    char stunum[11];
    double height;
};

union student2
{
    char n;
    double weight;
};

enum g {male, female, others};

typedef unsigned char *byte_pointer;
int stuid = 1183710109;
char Firstname = 'G';
float bir = 20000417;
double ID_d = 350581200004173518;
char *name = &Firstname;
int grade[3] = {97,98,99};
unsigned int age = 20;

void show_bytes(byte_pointer data,size_t len)
{
    printf("        ");
    size_t i;
    for(i=0;i<len;i++)
    {
        printf("%0.2x ",data[i]);
    }
    printf("\n");
}

int main(void)
{
    struct student1 stu1;
    strcpy(stu1.stunum, "1183710109");
    stu1.height = 175.5;
    union student2 stu2;
    stu2.n = 'W';
    stu2.weight = 60.0;

    printf("变量名			内容				地址		        内存字节(16进制)\n");
    printf("struct: stu1 					        %p	", &stu1);
    show_bytes((byte_pointer)&stu1, sizeof(stu1));
    printf("stu1.stunum[11]	      %s			%p	", stu1.stunum, &(stu1.stunum));
    show_bytes((byte_pointer)&(stu1.stunum), sizeof(stu1.stunum));

    printf("stu1.height		%.1f				%p	", stu1.height, &(stu1.height));
    show_bytes((byte_pointer)&(stu1.height), sizeof(stu1.height));
    printf("\n");

    printf("union: stu2						%p	", &stu2);
    show_bytes((byte_pointer)&stu2, sizeof(stu2));
    stu2.n = 'W';
    printf("stu2.n	                  %c			        %p	", stu2.n, &(stu2.n));
    show_bytes((byte_pointer)&(stu2.n), sizeof(stu2.n));

    stu2.weight = 60.0;
    printf("stu2.weight	        %.1f				%p	", stu2.weight, &(stu2.weight));
    show_bytes((byte_pointer)&(stu2.weight), sizeof(stu2.weight));
    printf("\n");

    printf("int:\n");
    printf("stuid                 %d			%p	", stuid, &stuid);
    show_bytes((byte_pointer)&stuid, sizeof(int));
    printf("\n");

    printf("char:\n");
    printf("Firstname                 %c 	 			%p	", Firstname, &Firstname);
    show_bytes((byte_pointer)&Firstname, sizeof(char));
    printf("\n");

    printf("float:\n");
    printf("bir                 %f	                %p	", bir, &bir);
    show_bytes((byte_pointer)&bir, sizeof(float));
    printf("\n");

    printf("double:\n");
    printf("ID_d              %.1f	                %p	", ID_d, &ID_d);
    show_bytes((byte_pointer)&ID_d, sizeof(double));
    printf("\n");

    printf("char *:\n");
    printf("name                    %x		        %p	", name, &name);
    show_bytes((byte_pointer)&name, sizeof(char *));
    printf("\n");

    printf("unsigned int:\n");
    printf("age                       %d				%p	", age, &age);
    show_bytes((byte_pointer)&age, sizeof(unsigned int));
    printf("\n");

    printf("int[]						        %p	", grade);
    show_bytes((byte_pointer)grade, sizeof(grade));
    printf("grade[0]		  %d				%p	", grade[0], &(grade[0]));
    show_bytes((byte_pointer)&(grade[0]), sizeof(grade[0]));
    printf("grade[1]		  %d				%p	", grade[1], &(grade[1]));
    show_bytes((byte_pointer)&(grade[1]), sizeof(grade[1]));
    printf("grade[2]		  %d				%p	", grade[2], &(grade[2]));
    show_bytes((byte_pointer)&(grade[2]), sizeof(grade[2]));
    printf("\n");

    printf("\n函数名			地址\n");
    printf("main			%p\n",  &main);
    printf("printf			%p",  &printf);
    printf("\n");
    return 0;
}
