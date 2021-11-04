///璸衡筿禣
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

///ゼ禬筁 20场Μ膀セ禣 80 じ
///禬筁 20 50ず场–Μ 3 じ
///禬筁 50 100ず场–Μ 5 じ
///禬筁 100场–Μ 8 じ
