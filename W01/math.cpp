#include  <stdio.h>
#include <math.h>

int main(){
	
	int a,b,c; double X1,X2;
	printf("enter a b c:");
	scanf("%d %d %d",&a,&b,&c);
	if(b*b-4*a*c>=0){
		X1=(-b+sqrt(b*b-4*a*c))/2/a;
		X2=(-b-sqrt(b*b-4*a*c))/2/a;
		printf("%.1f %.1f",X1,X2);
	}
	
	else{
		printf("no real root");
	}
} 
