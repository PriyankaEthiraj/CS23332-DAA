/*Given a sorted array of integers say arr[] and a number x. Write a recursive program using divide and conquer strategy to check if there exist two elements in the array whose sum = x. If there exist such two elements then return the numbers, otherwise print as “No”.
Note: Write a Divide and Conquer Solution*/

#include<stdio.h>
int binarysearch(int arr[],int low,int high,int x)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x)
        return mid;
    else if (arr[mid]>x)
    {
        return binarysearch(arr,low,mid-1,x);
    }
    else
    {
       return binarysearch(arr,mid+1,high,x); 
    }
}
void twoSum(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        int complement=x-arr[i];
        if(binarysearch(arr,i+1,n-1,complement)!=-1)
        {
            printf("%d\n%d",arr[i],complement);
            return;
        }
    }
    printf("No");
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
    int x;
    scanf("%d",&x);
    twoSum(arr,n,x);
    return 0;
}
