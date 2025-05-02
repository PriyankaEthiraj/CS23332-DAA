#include<stdio.h>
void fun(int n)
{
    int count=0;
    int i=1;
    count++;
    int s=1;
    count++;
    while(s<=n)
    {
        count++;
        i++;
        count++;
        s+=i;
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