///��for�j��D1!+...+n!����

#include <stdio.h>

int main()

{
	int n,i,k,sum=1,s=0;
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
	sum*=i;
	s+=sum;
	}

	printf("�п�J���@���:1!��%d!���`�M��=%d \n",n,s);
}
