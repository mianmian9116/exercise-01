///�N�T�ƫ��j�p�ƦC

int main()

{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);

	if (b>a)
	{
	temp=a;
	a=b;
	b=temp;

		if(c>b)
		{
		temp=b;
		b=c;
		c=temp;
		}
	}

		if (c>a)
	{
	temp=a;
	a=c;
	c=temp;

		if(b>c)
		{
		temp=c;
		c=b;
		b=temp;
		}
	}

	printf("%d,%d,%d",a,b,c);
}
