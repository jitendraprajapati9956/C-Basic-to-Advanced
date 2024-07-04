#include<stdio.h>
int main()
{
	int a[5],b[5],total;
	for(i=0;i<5;i++)
		{
			printf("enter a[%d]:",i);
			scanf("%d",&a[i]);
		}
	for(i=0;i<5;i++)
		{
			printf("a[%d]:%d\n",i,a[i]);
			scanf("%d",&b[i]);		
		}
	for(i=0;i<5;i++)
		{
			printf("a[%d]:%d\n",i,a[i]);
			printf("b[%d]:%d\n",i,b[i]);
			printf("total:%d",total);
		}
	
}