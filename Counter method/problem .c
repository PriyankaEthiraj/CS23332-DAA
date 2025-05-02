#include<stdio.h>
void fun(int n)
{
    int c=0;
    int count=0;
    count++;
    for(int i=n/2;i<n;i++)
    {
        count++;
        for(int j=1;j<n;j=2*j)
        {
            count++;
            for(int k=1;k<n;k=k*2)
            {
                count++;
                c++;
                count++;
            }
            count++;
        }
        count++;
    }
    count++;
    printf("%d",count);
}
int main()
{
    int a;
    scanf("%d",&a);
    fun(a);
}
