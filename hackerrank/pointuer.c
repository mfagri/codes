#include<stdio.h>
void maximum(int *x,int *y,int *m)
{
	if(*x > *y)
		*m = *x;
	else
		*m = *y;
}
int main()
{
	int a,b,max;
	printf("val a: ");
	scanf("%d",&a);
	printf("val b: ");
	scanf("%d",&b);
	maximum(&a,&b,&max);
	printf("max is:%d	",max);
	}	
