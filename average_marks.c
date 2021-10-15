#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of students\n");
    scanf("%d",&n);
    float a[n],avg,s=0;
    int i;
    printf("Enter the marks:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
    printf("Average is %.2f\n",avg);
}