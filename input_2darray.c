#include<stdio.h>
int main()
{
    int m,n,i,j;
    int a[100][100];
    printf("enter the number of rows\n");
    scanf("%d",&m);
    printf("enter the number of coulmns\n");
    scanf("%d",&n);
    printf("input the 2d matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the printined matrix is \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}