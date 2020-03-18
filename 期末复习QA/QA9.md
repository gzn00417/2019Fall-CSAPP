# Q&A 9

---
## int a[100]; 在作为全局变量、局部变量、参数时是怎么实现对a[i]元素的访问的？
全局变量：利用%rip+偏移量访问
局部变量：利用%rbp+偏移量访问
参数：先通过%rbp+偏移量得到栈中作为参数传递的a的首地址，然后利用此地址+偏移量访问

---
## int *p;*(p++)与(*p)++实现有什么不同？
对于*(p++)，是取得p+sizeof(int)地址处的值
mov    -0x8(%rbp),%rax
add    $0x4,%rax
mov    %rax,-0x8(%rbp)
对于(*p)++，是将p地址处的值自增1
mov    -0x8(%rbp),%rax
mov    (%rax),%eax
lea    0x1(%rax),%edx
mov    -0x8(%rbp),%rax
mov    %edx,(%rax)

---
## if 分支语句的汇编语言实现与C源程序的条件判断之间是 *互补* 关系。
if(y>100)
0x5555555548c9	mov    -0x20(%rbp),%eax
0x5555555548cc	cmp    $0x64,%eax
0x5555555548cf   77 _ 	jle    0x5555555548d8 <main+105>
0x5555555548d1  movl   $0xffffffff,-0x20(%rbp)

---
## switch多分支，case条件码不规律时是怎么实现的？
稀疏的Switch语句 使用决策树 (if-elseif-elseif-else)

