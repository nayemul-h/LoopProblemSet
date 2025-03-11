#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j,result;
    scanf("%d",&n);
    for(i=1,j=2;i<=n;i++,j++)
    {
        result+=(i*i)*j;
    }

    printf("Result: %d",result);


    return 0;
}
