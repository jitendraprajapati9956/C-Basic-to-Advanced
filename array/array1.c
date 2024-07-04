#include<stdio.h>
int main()
{
	int a[5],b[5],total[5],i,j;
	for(i=0;i<5;i++)
		{
			printf("enter a[%d]:",i);
			scanf("%d",&a[i]);
		}
	for(i=0;i<5;i++)
		{
			printf("enter b[%d]:",i);
			scanf("%d",&b[i]);		
		}
	for(i=0;i<5;i++)
		{
			printf("a[%d]:%d\t",i,a[i]);
			printf("b[%d]:%d\t",i,b[i]);
			printf("total[%d]:%d\n",i,a[i]+b[i]);
		}
	
}