#include<stdio.h>
int main()
{
    int i,n,series=1;
    printf("Series Numbers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        printf("%d ",series);
        series=series+2;

    }


    return 0;

}
