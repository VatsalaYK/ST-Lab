#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int choice=0,n,i;
	int locks=0,stocks=0,barrels=0;
	int tlocks,tstocks,tbarrels;
	float lsales,ssales,bsales,sales,comm=0;
	float lprice=45.0,sprice=30.0,bprice=25.0;
	tlocks=0;
	tstocks=0;
	tbarrels=0;
	printf("Enter the number of locks sold: \n");
	scanf("%d",&locks);
	if(locks==-1)
	{	
		printf("PROGRAM TERMINATED\n");
		exit(0);
	}
	while(locks!=-1)
	{
		tlocks=tlocks+locks;
		if((tlocks>=70 || tlocks<=1) && (tstocks>=1 || tstocks<=80) && (tbarrels>=1 || tbarrels<=90) )
		{					
			printf("LOCKS OUT OF RANGE\n");
		}
		printf("\nTotal number of locks are %d\n",tlocks);//prints total no. of locks
		printf("Enter the number of STOCKS sold:\n");
		scanf("%d",&stocks);
		tstocks=tstocks+stocks;
		if( (tlocks<=70 || tlocks>=1) && (tstocks>=80 || tstocks<=1) && (tbarrels>=1 || tbarrels<=90))
		{					
			printf("STOCKS OUT OF RANGE\n");//comes out of loop if stocks are out of range
		}			
		printf("\nTotal number of stocks are %d\n",tstocks);//prints total no. of stocks
		printf("Enter the number of BARRELS sold:\n");
		scanf("%d",&barrels);
		tbarrels=tbarrels+barrels;
		if((tlocks<=70 || tlocks>=1) && (tstocks>=1 || tstocks<=80) && (tbarrels<=1 || tbarrels>=90))
		{					
			printf("BARRELS OUT OF RANGE\n");//comes out of loop if barrels are out of range
		}
		printf("\nTotal number of barrels are %d\n",tbarrels);//prints total no. of barrels
		printf("Enter the number of locks sold: \n");
		scanf("%d",&locks);
		if((tlocks>=70 || tlocks<=1 ) && (tstocks<=1 || tstocks>=80) && (tbarrels>=1 && tbarrels<=90))
		{				
			printf("TLOCKS AND TSTOCKS OUT OF RANGE\n");
		}
		else if((tlocks<=70 && tlocks>=1) &&(tstocks<=1 || tstocks>=80) &&  (tbarrels<=1 ||tbarrels>=90) )
		{				
			printf("TSTOCKS AND TBARRELS OUT OF RANGE\n");
		}
		else if((tlocks>=70 || tlocks<=1 ) && (tstocks>=1 && tstocks<=80) && (tbarrels<=1 ||tbarrels>=90))
		{				
			printf("TBARRELS AND TLOCKS OUT OF RANGE\n");
		}
		else if((tlocks>=70 || tlocks<=1 ) && (tstocks<=1 || tstocks>=80) && (tbarrels<=1 ||tbarrels>=90))
		{			
			printf("TSTOCKS,TBARRELS AND TLOCKS OUT OF RANGE\n");
			//exit(0);
		}
		lsales=tlocks*lprice;
		ssales=tstocks*sprice;
		bsales=tbarrels*bprice;
		sales=lsales+ssales+bsales;
	}
	if((tlocks<=70 && tlocks>=1 ) && (tstocks>=1 && tstocks<=80) && (tbarrels>=1 && tbarrels<=90))
	{
		printf("Total SALES is %f\n",sales);
		if(sales>1800)
		{
			comm=0.10*1000;
			comm=comm+0.15*800;
			comm=comm+0.20*(sales-1800);
		}
		else if(sales>1000)
		{
			comm=0.10*1000;
			comm=comm+0.15*(sales-1000);
		}
		else
			comm=0.10*sales;
		printf("Commission is %f\n",comm);
	}
	return 0;
}				
