///�p��q�O
#include <stdio.h>

int main()

{
	int n,a;
	scanf("%d",&n);

	if (20>=n) printf("80");

	else if (50>=n&&n>20) printf("%d",80+3*(n-20));

	else if (100>=n&&n>50) printf("%d",170+5*(n-50));

	else if (n>100) printf("%d",420+8*(n-100));
}

///���W�L 20�X�������u���򥻶O 80 ��
///�W�L 20�X�b 50�X�H���������C�ץ[�� 3 ��
///�W�L 50�X�b 100�X�H���������C�ץ[�� 5 ��
///�W�L 100�X�H�W�������A�C�ץ[�� 8 ��
