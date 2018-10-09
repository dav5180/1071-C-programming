#include<stdio.h>

int main(){

    int height,w,s;

    printf("Enter height(-1 to exit):");


    while(scanf("%d",&height))
    {
        if(height<0)
        {
        printf("Bye! coding by 407410686");
        return 0;
        }
        w=height-1;
        s=1;

        for(int i=1;i<=height;i++)
        {
            for(int j=1;j<=w;j++)
            {
                printf(" ");
            }

            for(int l=1;l<=s;l++)
            {
                printf("*");
            }

            printf("  ");

            for(int l=1;l<=s;l++)
            {
                printf("*");
            }

            printf("\n");

            w=w-1;
            s=s+1;
        }
        printf("Enter height(-1 to exit):");
    }
}
