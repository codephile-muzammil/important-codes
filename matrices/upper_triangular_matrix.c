/*
Author: Muzammil
Problem: Check whether a 5x5 matrix is upper triangular (anti-diagonal logic)
Time: O(N^2), Space: O(N^2)
*/
#include<stdio.h>


void get_input(int a[5][5])
{
	int i,j;
	printf("Enter elements for 5x5 matrix:\n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void check_u_tri_wrt_main_diag(int a[5][5])          /*
																										checks whether the given matrix is uppertraingular or not
                                      							with respect to main diagonal (top left to bottom right)
																										*/
{
	int i,j,flag=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i>j&&a[i][j]!=0)
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("the given matrix is upper triangular\n");
	}
	if(flag==1)
	{
		printf("this matrix is not uppertriangular\n");
	}
}

void check_u_tri_wrt_anti_diag(int a[5][5])					/*
																										checks whether the given matrix is uppertraingular or not
                                      							with respect to anti diagonal (top right to bottom left)
																										*/
{
	int i,j,flag=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i+j>5&&a[i][j]!=0)
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("the given matrix is upper triangular\n");
	}
	if(flag==1)
	{
		printf("this matrix is not uppertriangular\n");
	}
}

/*
 my version (complex alternate)

Note: We can do it in simple way but this one is my understanding
also note that this will work in any type of input for 5x5 matrix only!
void u_triangular(int a[5][5])
{
	int j=4,i,l,count=0;
	for(i=1;i<=4;i++)
	{
		for(l=i;l<=4;l++)
		{
			if(a[l][j]==0)
			{
				count++;
			}
			
			//	printf("a[%d][%d]\n",l,j);
			
		}
		j--;
	}
	if(count==10)
	{
		printf("given matrix is upper triangular\n");
	}
	else
	{
		printf("given matrix is not upper triangular\n");
	}
}
*/
int main()
{
	int a[5][5];
	get_input(a);
	check_u_tri_wrt_main_diag(a);
  return 0;
}

