#include<stdio.h>
int main()
{  
	int price[5]={700,100,5500,11000,8000},i,qty[5],amt,disc,d_amt,gst,bill_amt,t1=0,t2=0,t3=0;
	for(i=0;i<5;i++)
	{
		printf("enter qty[%d]:",i);
		scanf("%d",&qty[i]);
	}
	printf("\nproduct\t\tprice\tqty\tamt\tdisc\td_amt\tgst\tbill_amt\n");
	for(i=0;i<5;i++)
	{
		amt=price[i]*qty[i];
		disc=amt*10/100;
		d_amt=amt-disc;
		gst=d_amt*18/100;
		bill_amt=d_amt+gst;
		t1=t1+d_amt;
		t2=t2+gst;
		t3=t3+bill_amt;
		if(i==0)
			printf("keybord");
		else if (i==1)
			printf("mouse");
		else if (i==2)
			printf("monitor");
		else if (i==3)
			printf("pro");
		else if (i==4)
			printf("ram");
		printf("\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",price[i],qty[i],amt,disc,d_amt,gst,bill_amt);
	}printf("\t\t\t\t\t\t%d\t%d\t%d",t1,t2,t3);
}