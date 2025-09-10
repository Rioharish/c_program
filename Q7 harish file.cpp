#include<stdio.h>
int main(){
	int a,b;
	
	
	printf("Enter first number (a): ");
	scanf("%d",&a);
	
	printf("enter second number (b): ");
	scanf("%d", &b);
	
	
	printf("\nbefore swapping: a =%d, b = %d\n",a, b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	
	printf("after swapping: a = %d, b = %d\n",a,b);
	return 0;
}