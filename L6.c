#include<stdio.h>
int main()
{
    int x,n,i=1,guess;

    scanf("%d%d",&x,&n);
    int s=n;
    while(i<=n)
    {
        scanf("%d",&guess);
        if(guess==x) {
                printf("Player 2 win");
        break;}

        else
        {
            printf("Wrong,%d choice left!\n",s-1);


        }


        s--;
        i++;


    }

    return 0;
}
