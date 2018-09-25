#include  <stdio.h>
#include <math.h>

int main(){
	int n1,n2;
	int sum=0;
	printf("enter n1 n2:");
	scanf("%d %d",&n1,&n2);
	while(n1>=0||n2>=0)
	{
		int sum=0;
		for(int i=n1;i<=n2;i++){
			sum += i;
		}
		printf("sum(n1,n2)= %d\n",sum);
		printf("enter n1 n2:");
		scanf("%d %d",&n1,&n2);
	}
	
	
}
