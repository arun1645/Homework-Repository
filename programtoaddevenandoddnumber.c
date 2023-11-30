#include<stdio.h>
void  main()
{
	int in[100], i, j ,a=0 ,b=0;
	printf(" how many elements you want to enter: ");
	scanf_s("%d", &j);
	printf("\nenter the elements :");
	for (i = 0; i <j; i++)
	{
		scanf_s("\n%d", &in[i]);
		if (in[i] % 2 == 0)
		{
			a = in[i] + a;
			
		}
		else
		{
			b = b + in[i];
		}
	}
	printf(" elements are:");
	for ( i = 0; i<j; i++)
	{
		printf("\n%d",in[i]);
	}
	printf("\n addition of odd number  is : % d", b );
	printf("\naddition of even number is is :%d", a );

}