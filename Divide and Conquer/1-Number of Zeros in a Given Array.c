/*Problem Statement
Given an array of 1s and 0s this has all 1s first followed by all 0s. Aim is to find the number of 0s. Write a program using Divide and Conquer to Count the number of zeroes in the given array.*/

#include<stdio.h>
int countzeroes(int arr[],int low,int high)
{
  if(low==high)
  {
      return 1-arr[low];
  }
  int mid=(low+high)/2;
  int leftz=countzeroes(arr,low,mid);
  int rightz=countzeroes(arr,mid+1,high);
  return leftz+rightz;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",countzeroes(arr,0,n-1));
    return 0;
}
