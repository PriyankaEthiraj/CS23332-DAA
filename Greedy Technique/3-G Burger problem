/*A person needs to eat burgers. Each burger contains a count of calorie. After eating the burger, the person needs to run a distance to burn out his calories. 
 If he has eaten i burgers with c calories each, then he has to run at least 3i * c  kilometers to burn out the calories. For  example, if he ate 3
 burgers with the count of calorie in the order: [1, 3, 2], the kilometers he needs to run are (30 * 1) + (31 * 3) + (32 * 2) = 1 + 9 + 18 = 28.
 But this is not the minimum, so need to try out other orders of consumption and choose the minimum value. Determine the minimum distance
 he needs to run. Note: He can eat burger in any order and use an efficient sorting algorithm.Apply greedy approach to solve the problem.
Input Format
First Line contains the number of burgers
Second line contains calories of each burger which is n space-separate integers */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int c[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(c[i]<c[j])
            {
                a=c[i];
                c[i]=c[j];
                c[j]=a;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        sum+=pow(n,k)*c[k];
    }
    printf("%d",sum);
    return 0;
}
