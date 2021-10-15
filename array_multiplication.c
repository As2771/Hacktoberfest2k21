#include<stdio.h>
int main()
{
    int a[100];
    int c=1,d;
    int n,m;
    int i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c = c * a[i];
    }
    printf("enter the divisor\n");
    scanf("%d",&m);
    d = c % m;
    printf("the remainder left is %d\n",d);
}