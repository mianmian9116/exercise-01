///用for迴圈求1!+...+n!之值

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

	printf("請輸入任一整數:1!到%d!的總和為=%d \n",n,s);
}
