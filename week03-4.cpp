///����

#include <stdio.h>

int main()

{
	int n,a,b,c,s;
	scanf("%d",&n);

	a=n/10;
	s=n%10;
	b=s/5;
	s=s%5;
	c=s;
	printf("10��%d��,5��%d��,1��%d��",a,b,c);
}
