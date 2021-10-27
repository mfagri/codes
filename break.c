#include<stdio.h>
void ft_break(void)
{
	int i;
	int n;
	int s = 0;
	i = 1;
	while(i < 8)
	{
		printf("enter num%d\n ",i);
		scanf("%d",&n);
		if(n < 0)
			break;
		s = s + n;
		i++;
	}
	printf("%d\n",s);
}
int main()
{
	ft_break();
}
