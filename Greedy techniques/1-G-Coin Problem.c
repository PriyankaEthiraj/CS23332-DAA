/*Write a program to take value V and  we want to make change for V Rs, and we have infinite supply of each of the denominations in Indian currency, i.e., we have infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, what is the minimum number of coins and/or notes needed to make the change.*/

#include<stdio.h>
int minCost(int V)
{
    int d[]={1000,500,100,50,20,10,5,2,1};
    int count=0;
    for(int i=0;i<9;i++)
    {
        count+=V/d[i];
        V%=d[i];
    }
    return count;
}
int main()
{
    int V;
    scanf("%d",&V);
    printf("%d",minCost(V));
    return 0;
}
