#include<stdio.h>

sum(int num[])
{
	int i,sum=0;
	for(i=0;i<=9;i++)
	{
		sum=sum+num[i];
	}
	return sum;
}
main()
{
	int a[]={4,5,8,5,3,6,7,5,1,0};
	sum(a);
	printf("Sum of array elements is :%d",sum(a));
}

