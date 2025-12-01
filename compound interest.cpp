#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	float ci;
	printf("enter p t r values");
	scanf("%d%d%d",&p,&t,&r);
	ci=p*pow(1+r/100.0,t)-p;
	printf("compound interest is %f",ci);
	return 0;
}
