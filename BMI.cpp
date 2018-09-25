#include  <stdio.h>

int main(){
	float BMI,cm,kg;
	printf("enter your height and weight:");
	while (scanf("%f %f",&cm,&kg)){
		cm=cm/100;
		cm=cm*cm;
		BMI=kg/cm;
		printf("your BMI is %.1f\n",BMI);
		printf("enter your height and weight:");
		
	}
	
	
}
