#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 50

struct Date{
   int year;
   int month;
   int day;
};

struct Lotto{
    Date date;
    int num[6];
};

int duplicate(int num[],int pos){
    int m=0;
    for(int i=1;i<pos;i++){
        if(num[pos]==num[i]) m=1;
    }
    return m;
}
int main(){

   int n;
   Lotto lottos[MAX];
   srand(time(NULL));
   printf("Enter N:");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        lottos[i].date.year = rand()%11+2010;
        lottos[i].date.month = rand()%12+1;
        lottos[i].date.day = rand()%31+1;
        printf("%d/%02d/%02d  ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day);
        for(int j=1;j<=6;j++){
            lottos[i].num[j]=rand()%49+1;
            do{
                lottos[i].num[j]=rand()%49+1;
            }   while(duplicate(lottos[i].num,j));
            printf("%02d ",lottos[i].num[j]);
        }
        printf("\n");
   }
}

