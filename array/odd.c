#include<stdio.h>
int main()
{
	int a[10],i,odd=0,even=0,total=0;
	for(i=0;i<10;i++)
	{
		printf("even [%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			even=even+a[i];
		}
		else
		{
			odd=odd+a[i];
		}
	}
	printf("even sum : %d",even);
	printf("\nodd sum : %d",odd);
}