#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    int b=0,y=0;
    int *array;
    printf("输入整数个数 n: ");
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    for(int x=0;x<n;x++)
    {
        scanf("%d",&array[x]);
    }

    for(j=0;j<n;j++)
    {
        b=0;
        for(i = j; i < n; i++)
        {
            b=b+array[i];
            if(b>y)
              y=b;
        }
    }
    printf("最大子段和为%d",y);
}
