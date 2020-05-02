#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	clrscr();
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==2&&j==2)
			{
				printf("   ");
			}
			if(i==2&&j==3)
			{
				break;
			}
			if(i==2&&j==4)
			{
				break;
			}
			if(i==3&&j==2)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		 printf("\n");

	}
	for(k=1;k<=3;k++)
	{
		for(m=1;m<=6;m++)
		{
			if(k==1&&m==1)
			{
				printf("*");

			}
			if(k==1&&m==4)
			{
				printf("*");
			}
			if(k==2&&m==1)
			{
				printf("*");
			}
			if(k==2&&m==5)
			{
				printf("*");
			}
			if(k==3&&m==1)
			{
				printf("*");
			}
			if(k==3&&m==6)
			{
				printf("*");
			}
			printf(" ");

		}
		printf("\n");
	}


	getch();
}
