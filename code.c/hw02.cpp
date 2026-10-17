#include<stdio.h>
int main()
{
	int num=0;
	scanf("%d",&num);
	int a=num/100;
	int b=num/10%10;
	int c=num%10;
	int t=a+b+c;
	printf("你输入的三位正整数是: %d 百位: %d 十位: %d 个位: %d 各位数之和: %d",num,a,b,c,t);
	return 0;
	}

	
