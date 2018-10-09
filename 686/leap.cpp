#include<stdio.h>

int leap(int year){
    if((year%4==0 && !(year%100==0))||year%400==0)return 1;
    else return 0;
}

int timeconvert(int hh, int mm, int ss){
    return hh*3600+mm*60+ss;
}

int main(){
    int choice,year,hh,mm,ss,second;

    while(1){

        printf("Main Manu\n");
        printf("1.Leap year\n");
        printf("2.Second\n");
        printf("3.Exit\n");
        printf("=>");
        scanf("%d",&choice);

        if (choice==3) break;

        switch(choice){
            case 1:
                printf("Enter year:");
                scanf("%d",&year);
                if(leap(year)) printf("year %d is a leap year\n",year);
                else printf("year %d is not a leap year\n",year);

            break;

            case 2:
                printf("Enter hh:mm:ss :");
                scanf("%02d:%02d:%02d",&hh,&mm,&ss);
                printf("%02d:%02d:%02d = %d second\n",hh,mm,ss,(hh*3600+mm*60+ss));

            break;
        }
    }
}
