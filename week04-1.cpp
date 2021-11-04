///計算BMI是否正常

#include <stdio.h>

int main()

{
	int h,w,bmi;
	scanf("%d%d",&h,&w);

	if(bmi<18.5)printf("過瘦");
	else if(bmi>24)printf("過重");
	else printf("正常");
}
