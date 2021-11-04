///求三數之中最大者

#include <stdio.h>

int main()

{
	int m,a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if (a>b&&a>c) m=a;
	else if (b>a&&b>c) m=b;
	else m=c;

	printf("%d",m);
}
