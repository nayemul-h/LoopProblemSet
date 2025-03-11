#include<stdio.h>
int main()
{
    int n,i,s=1;
    printf("Enter the number of students:");
    scanf("%d",&n);

    float A,HW,CT,MT,TF,sum;
    for(i=1;i<=n;i++)
    {
        scanf("%f%f%f%f%f",&A,&HW,&CT,&MT,&TF);
        sum=A+HW+CT+MT+TF;
        if(sum<55) printf("student %d: F",i);
        if(sum>=55 && sum<58) printf("student %d: D\n",s);
        if(sum>=58 && sum<62) printf("student %d: D+\n",s);
        if(sum>=62 && sum<66) printf("student %d: C-\n",s);
        if(sum>=66 && sum<70) printf("student %d: C\n",s);
        if(sum>=70 && sum<74) printf("student %d: C+\n",s);
        if(sum>=74 && sum<78) printf("student %d: B-\n",s);
        if(sum>=78 && sum<82) printf("student %d: B\n",s);
        if(sum>=82 && sum<86) printf("student %d: B+\n",s);
        if(sum>=86 && sum<90) printf("student %d: A-\n",s);
        if(sum>90) printf("student %d: A\n",s);
        s++;

    }

    return 0;
}
