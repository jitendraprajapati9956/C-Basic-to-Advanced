#include<stdio.h>
int main()
{
	int s;
	s=1;
	while(s<=50)
	{
		if(s%2!=0)
		{
			printf("%d ",s);
		}
		s++;
	}
}