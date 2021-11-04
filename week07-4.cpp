///用迴圈輸出一個n*n的平行四邊形

#include <stdio.h>

int main( void )
{
    int i,j;

    printf("請輸入大小:\n");

	int n;
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	{
	 	printf(" ");
	 	}

	 	for(j=1;j<=n;j++)
	 	{
	 	printf("*");
	 	}

	 printf("\n");
	 }

    return 0;
}
