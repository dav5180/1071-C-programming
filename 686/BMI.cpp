#include<stdio.h>

int main(){

    float height1,height2;

    printf("Enter height (-1 to exit):");

    while(scanf("%f %f",&height1,&height2)){

        if(height1<0){
        printf("Bye! Coding by 407410686");
        return 0;
        }

            for(int i=height1;i<=height2;i++){

                printf("%d cm: %.1f ~ %.1f (kg)\n",i,(i*i*18.5/10000),(i*i*24.0/10000));


                }
                printf("Enter height (-1 to exit):");

        }

}

/*
螢幕輸出：Enter height(-1 to exit): 170175
170 cm: 53.5 ~ 69.4 (kg)
171 cm: 54.1 ~ 70.2 (kg)
172 cm: 54.7 ~ 71.0 (kg)
173 cm: 55.4 ~ 72.8 (kg)
174 cm: 56.0 ~ 72.7 (kg)
175 cm: 56.7 ~ 73.5(kg)
Enter height(-1 to exit): -1 -1
Bye! Coding by your_ID
*/

