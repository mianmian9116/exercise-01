///n��ǥͪ��������Z

#include <stdio.h>

int main()

{
	float i,n,s,sum;
	scanf("%f",&n);

	for(i=1;i<=n;i++)
	{
	scanf("%f",&s);
	sum+=s;
	}

	printf("%.2f",sum/n);
}
