#include<stdio.h>

fact(int num)
{
	if(num<=0)
	{
		return 1;
	}
	else 
	{
		num=num*fact(num-1);
	}
	return num;
}

main()
{
	int n;
	printf("Enter  your valse of n:");
	scanf("%d",&n);

	fact(n);
	printf("%d!=%d",n,fact(n));

}
