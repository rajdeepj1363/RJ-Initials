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
				for(j=1;j<=6;j++)
				{
					if((i==1||i==2)||i==4)
					{
						cout<<"* ";

					}
					else if(i==3)
					{
						if(j==3||j==4)
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
						if(j==3)
						{
							cout<<"  ";

						}
						else
						{
							if(j!=6)
							{
								cout<<"* ";
							}

						}
					}
					else if(i==6)
					{
						if(j==3||j==4)
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
						if((j==3||j==4)||j==5)
						{
							cout<<"  ";

						}
						else
						{
							if(j==6)
							{
								cout<<"* * ";
							}
							else
							{
								cout<<"* ";
							}
						}
					}
					else
					{
						if((j==3||j==4)||(j==5||j==6))
						{
							cout<<"  ";
						}
						if(j==6)
						{
							cout<<"* * ";
						}
						else if(j==1||j==2)
						{
							cout<<"* ";
						}
					}

				}
				cout<<"\n";
			}
		}
}rj;
int main()
{
	//clrscr();
	rj.perf();
	getch();
}
