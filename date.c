#include<stdio.h>
#include<stdlib.h>
int d,m,y,nd,nm,ny;
void dmy()
{
	nd=d+1;
	nm=m;
	ny=y;
}
void dmy1()
{
	nd=1;
	nm=m+1;
	ny=y;
}
int main()
{	
	int choice=0,n,i;
	//scanf("%d",&n);
	//for(i=0;i<n;i++)
	while(1)
	{
		printf("Enter the day,month,year\n");
		scanf("%d%d%d",&d,&m,&y);
		if((d>=1 && d<=31) && (m>=1 && m<=12) && (y>=1812 && y<=2016))
		{
			if(m==1 || m==3 || m==5 ||m ==7 || m==8 || m==10)
			choice=1;
			if(m==4 || m==6 || m==9 || m==11 )
			choice=2;
			if( m==12)
			choice=3;
			if(m==2)
			choice=4;
			switch(choice)
			{
				case 1:
					if(d<31)
						dmy();
					else
						dmy1();
					break;
				case 2:
					if(d<30)
						dmy();
					else if(d==30)
						dmy1();
					else
					{
						printf("INVALID INPUT\n");
						return 0;
					}
					break;
				case 3:
					if(d<31)
						dmy();
					else if(y==2016)
					{
						printf("Year is out of range\n");
						return 0;
					}
					else
					{
						nd=1;
						nm=1;
						ny=y+1;
					}
					break;
				case 4:
					if(d<28)
						dmy();
					else if(((y%4==0) && (y%100!=0)) || (y%400==0))
					{
						if(d==28)
							dmy();
						else if(d==29)
							dmy1();
						else
						{
							printf("INVALID INPUT\n");
							return 0;
						}
					}
					else
					{
						if(d==28)
							dmy1();
						else
						{
							printf("INVALID INPUT\n");
							return 0;
						}
					}
					break;
				default : exit(0);
			}
			printf(" NEXT DATE IS %d-%d-%d\n",nd,nm,ny);
		}
		else
		{
			if(d<1 || d>31)
				printf("DAY OUT OF RANGE\n");
			if(m<1 || m>12)
				printf("MONTH OUT OF RANGE\n");
			if(y<1812 || y>2016)
				printf("YEAR OUT OF RANGE\n");
		}
	}
	return 0;
}
