//sum of series of 1 + 1/2 + 1/3 + ... + 1/n

#include<stdio.h>
void main(){
	int n;
	float sum=0.0,a,i;
	printf("/n Enter the value of n: ");
	scanf("%d",&n);
	for(i=1.0;i<=n;i++){
		a = 1/i;
		sum+=a;
	}
	printf("\n The sum of Series  1/1 + 1/2 + 1/3 + ... + 1/%d = %f",n,sum);
}
