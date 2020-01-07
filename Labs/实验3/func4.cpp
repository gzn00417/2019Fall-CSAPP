#include <cstdio>
using namespace std;

int x;//rdi

int func4(int d,int s)
{
	int a,b;
	a=d;
	a-=s;
	b=a/2+s;
	if (b>x) return func4(b-1,s)+b;
	else if (b<x) return func4(d,b+1)+b;
	return b;
}

int main()
{
	for (x=0;x<=20;x++) printf("%d %d\n",x,func4(14,0));
	return 0;
}
