/*Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x. Write divide and conquer algorithm to find floor of x.*/

#include<stdio.h>
int findfloor(int arr[],int low,int high,int x)
{
    if(low>high)
    {
        return -1;
    }
    if(x<arr[low])
    {   
        return -1;
    }
    if(x>=arr[high])
    {
        return arr[high];
    }
    int mid=low+high/2;
    if(arr[mid]==x)
    {
        return arr[mid];
    }
    if(mid<high && arr[mid]<x &&arr[mid+1]>x)
    {
        return arr[mid];
    }
    if(x<arr[mid])
    {
       return findfloor(arr,low,mid-1,x); 
    }
    return findfloor(arr,mid+1,high,x);
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
    int floorvalue=findfloor(arr,0,n-1,x);
    printf("%d",floorvalue);
    return 0;
    
}
