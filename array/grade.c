#include<stdio.h>
int main()
{
	int eng[5],guj[5],hindi[5],i,t,per;
	for(i=0;i<5;i++)
	{
		printf("enter the eng marks %d:",i);
		scanf("%d",&eng[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("enter the guj marks %d:",i);
		scanf("%d",&guj[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("enter the hindi marks %d:",i);
		scanf("%d",&hindi[i]);
	}
	printf("eng\tguj\thindi\ttotal\tper");
	for(i=0;i<5;i++)
	{
		t=eng[i] + guj[i] + hindi[i];
		per=t/3;
		printf("\n%d\t%d\t%d\t%d\t%d\t",eng[i],guj[i],hindi[i],t,per);
		if(per>=75)
		{
			printf("grade A");
		}
		else if(per<75 && per>60)
		{
			printf("grade B");
		}
		else if(per<60 && per>40)
		{
			printf("grade C");
		}
		else if(per<40)
		{
			printf("faill...");
		}
	}	
}