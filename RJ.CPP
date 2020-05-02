#include<iostream>
#include<conio.h>
using namespace std;
class RJ
{
	public:
		int i,j,k;
		void perf()
		{
			for(i=1;i<=8;i++)
			{
				for(j=1;j<=15;j++)
				{
					if(i==1||i==2)
					{
						if((j==7||j==8)||j==9)
						{
							cout<<"  ";
						}
						else
						{
							cout<<"* ";
						}
					}
					else if(i==3)
					{
						if((((((((j==3||j==4)||j==7)||j==8)||j==9)||j==10)||j==11)||j==14)||j==15)
						{
							cout<<"  ";
						}
						else
						{
							cout<<"* ";
						}
					}
					else if(i==4)
					{
						if((((((j==7||j==8)||j==9)||j==10)||j==11)||j==14)||j==15)
						{
							cout<<"  ";
						}
						else
						{
							cout<<"* ";
						}
					}
					else if(i==5)
					{
						if(((((j==1||j==2)||j==4)||j==5)||j==12)||j==13)
						{
							cout<<"* ";

						}
						else
						{
							cout<<"  ";

						}
					}
					else if(i==6)
					{
						if((((((j==3||j==4)||j==7)||j==8)||j==11)||j==14)||j==15)
						{
							cout<<"  ";
						}
						else
						{
							cout<<"* ";
						}
					}
					else if(i==7)
					{
						if((((((j==3||j==4)||j==5)||j==8)||j==9)||j==14)||j==15)
						{
							cout<<"  ";

						}
						else
						{
							cout<<"* ";
						}

					}
					else
					{
						if((((((j==1||j==2)||j==7)||j==8)||j==11)||j==12)||j==13)
						{
							cout<<"* ";
						}
						else
						{
							cout<<"  ";
						}
					}
				}
				cout<<"\n";
			}
		}
}rj;
int main()
{
	
	rj.perf();
	getch();
}
