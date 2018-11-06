#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 50

struct Date{
   int year;
   int month;
   int day;
};

int main(){

   Date dates [MAX];

   int n=10;
   srand(time(NULL));
   for(int i=0;i<n;i++){

        dates[i].year = rand()%11+2010;
        dates[i].month = rand()%12+1;
        dates[i].day = rand()%31+1;

     printf("%d/%02d/%02d\n", dates[i].year, dates[i].month, dates[i].day);
   }
}
