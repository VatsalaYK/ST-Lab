#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
			if( (a<1 || a>10) && (b>=1 && b<=10) && (c>=1 && c<=10))
			printf("'a' IS OUT OF RANGE\n");
			else if( (b<1 || b>10) && (a>=1 && a<=10) && (c>=1 && c<=10))
			printf("'b' IS OUT OF RANGE\n");
			else if(( c<1 || c>10 ) && (a>=1 && a<=10) && (b>=1 && b<=10))
			printf("'c' IS OUT OF RANGE\n");
			else if((a<1 || a>10) && ( b<1 || b>10 )  && (c>=1 && c<=10))
			printf("'a' and 'b' ARE OUT OF RANGE\n");
			else if(( b<1 || b>10 ) && ( c<1 || c>10 ) && (a>=1 && a<=10))
			printf("'b' and 'c' ARE OUT OF RANGE\n");
			else if(( a<1 || a>10 ) && ( c<1 || c>10 ) && (b>=1 && b<=10))
			printf("'a' and 'c' ARE OUT OF RANGE\n");
			else if(( a<1 || a>10 ) && ( b<1 || b>10 ) && ( c<1 || c>10 ))
			printf("'a','b' and 'c' ARE OUT OF RANGE\n");
			else if(a<b+c && b<c+a && c<a+b)
			{
				if(a==b && b==c)
				printf("EQUILATERAL TRIANGLE\n");
				else if(a!=b && b!=c && c!=a)
				printf("SCALENE TRIANGLE\n");
				else
				printf("ISOSCELES TRIANGLE\n");
			}
			else
			printf("OOPS...!Cannot form a triangle\n");
	}
	return 0;
}
