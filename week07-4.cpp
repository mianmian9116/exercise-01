///�ΰj���X�@��n*n������|���

#include <stdio.h>

int main( void )
{
    int i,j;

    printf("�п�J�j�p:\n");

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
