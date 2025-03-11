#include<stdio.h>
int main()
{
    int i,x,y;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    { if(x<y)
             {
                 printf("%d,",x*x);

                 x++;
             }
      if(x>y)
             {
                 printf("%d,",x*x);

                 x--;
             }
    }
     printf("Reached!");

    return 0;
}
