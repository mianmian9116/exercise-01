///輸出比m小的所有質數

#include <stdio.h>

int main()

{
	int m;
	scanf("%d",&m);

	for(int n=2;n<m;n++)
	{
		int a=0;

		for(int i=2;i<n;i++)
		{
		if(n%i==0) a=1;
		}

		if (a==0) printf("%d ",n);
	}
}
