#include<stdio.h>
int main()
{
    char c;
    int n=1;
    while(1)
    {
        if(c=='A')
        {
           break;

        }

        else
            {
                scanf("%c",&c);
                fflush(stdin);


              printf("Input %d: %c\n",n,c);
              n++;
            }


    }
    return 0;
}
