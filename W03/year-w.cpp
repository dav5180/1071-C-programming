#include <stdio.h>

int main(){
	
	int year;
	printf("enter year:");
	scanf("%d",&year);
	while(year>=0){
		if((year%4==0 && !(year%100==0))||year%400==0)
			printf("year %d is a leap year\n",year);
		else
			printf("year %d is not leap year\n",year);
		printf("enter year:");
		scanf("%d",&year);
	}	
	
	
}
