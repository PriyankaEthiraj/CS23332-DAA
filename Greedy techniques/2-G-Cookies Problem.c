/*Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.*/

#include<stdio.h>
int max(int a[],int n,int b[],int c)
{
    int i=0,j=0,count=0;
    while(i<n && j<c)
    {
        if(b[j]>a[i])
        {
            count++;
            i++;
        }
        j++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    int b[c];
    for(int i=0;i<c;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("%d\n",max(a,n,b,c));
    return 0;
}
