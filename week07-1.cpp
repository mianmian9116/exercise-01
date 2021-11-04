///輸出等比數列

#include <stdio.h>
int main()

{
	int i,a,s,n,sum;
	scanf("%d%d%d",&a,&s,&n);

	printf("%d",a);

	sum=a;

	for(i=1;i<n;i++)
	{
	sum*=s;
	printf(",%d",sum);
	}
}
