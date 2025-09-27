/*
Author: Muzammil
Problem: Find maximum and minimum of 10 integers in an array
Approach: Single pass for max and min using separate functions
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<stdio.h>

void get_input(int a[])
{
  int i;
  printf("enter 10 integers\n");
  for(i=0;i<=9;i++)
  {
    scanf("%d",&a[i]);
  }
}
//  function to find maximum
int find_max(int a[])
{
  int i,max;
  max=a[0];

  for(i=1;i<=9;i++)
  {
    if(a[i]>=max)
    {
      max=a[i];
    }
  }
  return max;

}
//  function to find minimum
int find_min(int a[])
{
   int i,min;
  min=a[0];

  for(i=1;i<=9;i++)
  {
    if(a[i]<=min)
    {
      min=a[i];
    }
  }
  return min;
}
int main()
{
  int a[10],min,max;
  get_input(a);
  max=find_max(a);
  printf("maximum is %d\n",max);
  min=find_min(a);
  printf("minimum is %d\n",min);

}
