
hello:     file format elf64-x86-64


Disassembly of section .init:

0000000000401000 <_init>:
  401000:	48 83 ec 08          	sub    $0x8,%rsp
  401004:	48 8b 05 ed 2f 00 00 	mov    0x2fed(%rip),%rax        # 403ff8 <__gmon_start__>
  40100b:	48 85 c0             	test   %rax,%rax
  40100e:	74 02                	je     401012 <_init+0x12>
  401010:	ff d0                	callq  *%rax
  401012:	48 83 c4 08          	add    $0x8,%rsp
  401016:	c3                   	retq   

Disassembly of section .plt:

0000000000401020 <.plt>:
  401020:	ff 35 e2 2f 00 00    	pushq  0x2fe2(%rip)        # 404008 <_GLOBAL_OFFSET_TABLE_+0x8>
  401026:	ff 25 e4 2f 00 00    	jmpq   *0x2fe4(%rip)        # 404010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40102c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000401030 <puts@plt>:
  401030:	ff 25 e2 2f 00 00    	jmpq   *0x2fe2(%rip)        # 404018 <puts@GLIBC_2.2.5>
  401036:	68 00 00 00 00       	pushq  $0x0
  40103b:	e9 e0 ff ff ff       	jmpq   401020 <.plt>

0000000000401040 <printf@plt>:
  401040:	ff 25 da 2f 00 00    	jmpq   *0x2fda(%rip)        # 404020 <printf@GLIBC_2.2.5>
  401046:	68 01 00 00 00       	pushq  $0x1
  40104b:	e9 d0 ff ff ff       	jmpq   401020 <.plt>

0000000000401050 <getchar@plt>:
  401050:	ff 25 d2 2f 00 00    	jmpq   *0x2fd2(%rip)        # 404028 <getchar@GLIBC_2.2.5>
  401056:	68 02 00 00 00       	pushq  $0x2
  40105b:	e9 c0 ff ff ff       	jmpq   401020 <.plt>

0000000000401060 <atoi@plt>:
  401060:	ff 25 ca 2f 00 00    	jmpq   *0x2fca(%rip)        # 404030 <atoi@GLIBC_2.2.5>
  401066:	68 03 00 00 00       	pushq  $0x3
  40106b:	e9 b0 ff ff ff       	jmpq   401020 <.plt>

0000000000401070 <exit@plt>:
  401070:	ff 25 c2 2f 00 00    	jmpq   *0x2fc2(%rip)        # 404038 <exit@GLIBC_2.2.5>
  401076:	68 04 00 00 00       	pushq  $0x4
  40107b:	e9 a0 ff ff ff       	jmpq   401020 <.plt>

0000000000401080 <sleep@plt>:
  401080:	ff 25 ba 2f 00 00    	jmpq   *0x2fba(%rip)        # 404040 <sleep@GLIBC_2.2.5>
  401086:	68 05 00 00 00       	pushq  $0x5
  40108b:	e9 90 ff ff ff       	jmpq   401020 <.plt>

Disassembly of section .text:

0000000000401090 <_start>:
  401090:	31 ed                	xor    %ebp,%ebp
  401092:	49 89 d1             	mov    %rdx,%r9
  401095:	5e                   	pop    %rsi
  401096:	48 89 e2             	mov    %rsp,%rdx
  401099:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40109d:	50                   	push   %rax
  40109e:	54                   	push   %rsp
  40109f:	49 c7 c0 b0 11 40 00 	mov    $0x4011b0,%r8
  4010a6:	48 c7 c1 50 11 40 00 	mov    $0x401150,%rcx
  4010ad:	48 c7 c7 c1 10 40 00 	mov    $0x4010c1,%rdi
  4010b4:	ff 15 36 2f 00 00    	callq  *0x2f36(%rip)        # 403ff0 <__libc_start_main@GLIBC_2.2.5>
  4010ba:	f4                   	hlt    
  4010bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004010c0 <_dl_relocate_static_pie>:
  4010c0:	c3                   	retq   

00000000004010c1 <main>:
  4010c1:	55                   	push   %rbp
  4010c2:	48 89 e5             	mov    %rsp,%rbp
  4010c5:	48 83 ec 20          	sub    $0x20,%rsp
  4010c9:	89 7d ec             	mov    %edi,-0x14(%rbp)
  4010cc:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  4010d0:	83 7d ec 04          	cmpl   $0x4,-0x14(%rbp)
  4010d4:	74 16                	je     4010ec <main+0x2b>
  4010d6:	48 8d 3d 2b 0f 00 00 	lea    0xf2b(%rip),%rdi        # 402008 <_IO_stdin_used+0x8>
  4010dd:	e8 4e ff ff ff       	callq  401030 <puts@plt>
  4010e2:	bf 01 00 00 00       	mov    $0x1,%edi
  4010e7:	e8 84 ff ff ff       	callq  401070 <exit@plt>
  4010ec:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  4010f3:	eb 48                	jmp    40113d <main+0x7c>
  4010f5:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4010f9:	48 83 c0 10          	add    $0x10,%rax
  4010fd:	48 8b 10             	mov    (%rax),%rdx
  401100:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401104:	48 83 c0 08          	add    $0x8,%rax
  401108:	48 8b 00             	mov    (%rax),%rax
  40110b:	48 89 c6             	mov    %rax,%rsi
  40110e:	48 8d 3d 19 0f 00 00 	lea    0xf19(%rip),%rdi        # 40202e <_IO_stdin_used+0x2e>
  401115:	b8 00 00 00 00       	mov    $0x0,%eax
  40111a:	e8 21 ff ff ff       	callq  401040 <printf@plt>
  40111f:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401123:	48 83 c0 18          	add    $0x18,%rax
  401127:	48 8b 00             	mov    (%rax),%rax
  40112a:	48 89 c7             	mov    %rax,%rdi
  40112d:	e8 2e ff ff ff       	callq  401060 <atoi@plt>
  401132:	89 c7                	mov    %eax,%edi
  401134:	e8 47 ff ff ff       	callq  401080 <sleep@plt>
  401139:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  40113d:	83 7d fc 07          	cmpl   $0x7,-0x4(%rbp)
  401141:	7e b2                	jle    4010f5 <main+0x34>
  401143:	e8 08 ff ff ff       	callq  401050 <getchar@plt>
  401148:	b8 00 00 00 00       	mov    $0x0,%eax
  40114d:	c9                   	leaveq 
  40114e:	c3                   	retq   
  40114f:	90                   	nop

0000000000401150 <__libc_csu_init>:
  401150:	41 57                	push   %r15
  401152:	49 89 d7             	mov    %rdx,%r15
  401155:	41 56                	push   %r14
  401157:	49 89 f6             	mov    %rsi,%r14
  40115a:	41 55                	push   %r13
  40115c:	41 89 fd             	mov    %edi,%r13d
  40115f:	41 54                	push   %r12
  401161:	4c 8d 25 e8 2c 00 00 	lea    0x2ce8(%rip),%r12        # 403e50 <_DYNAMIC>
  401168:	55                   	push   %rbp
  401169:	48 8d 2d e0 2c 00 00 	lea    0x2ce0(%rip),%rbp        # 403e50 <_DYNAMIC>
  401170:	53                   	push   %rbx
  401171:	4c 29 e5             	sub    %r12,%rbp
  401174:	48 83 ec 08          	sub    $0x8,%rsp
  401178:	e8 83 fe ff ff       	callq  401000 <_init>
  40117d:	48 c1 fd 03          	sar    $0x3,%rbp
  401181:	74 1b                	je     40119e <__libc_csu_init+0x4e>
  401183:	31 db                	xor    %ebx,%ebx
  401185:	0f 1f 00             	nopl   (%rax)
  401188:	4c 89 fa             	mov    %r15,%rdx
  40118b:	4c 89 f6             	mov    %r14,%rsi
  40118e:	44 89 ef             	mov    %r13d,%edi
  401191:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  401195:	48 83 c3 01          	add    $0x1,%rbx
  401199:	48 39 dd             	cmp    %rbx,%rbp
  40119c:	75 ea                	jne    401188 <__libc_csu_init+0x38>
  40119e:	48 83 c4 08          	add    $0x8,%rsp
  4011a2:	5b                   	pop    %rbx
  4011a3:	5d                   	pop    %rbp
  4011a4:	41 5c                	pop    %r12
  4011a6:	41 5d                	pop    %r13
  4011a8:	41 5e                	pop    %r14
  4011aa:	41 5f                	pop    %r15
  4011ac:	c3                   	retq   
  4011ad:	0f 1f 00             	nopl   (%rax)

00000000004011b0 <__libc_csu_fini>:
  4011b0:	c3                   	retq   

Disassembly of section .fini:

00000000004011b4 <_fini>:
  4011b4:	48 83 ec 08          	sub    $0x8,%rsp
  4011b8:	48 83 c4 08          	add    $0x8,%rsp
  4011bc:	c3                   	retq   
