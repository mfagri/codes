#include<stdio.h>
void ft_continue(void)
{
	int i;
	int n;
	int s = 0;
	i = 1;
	while(i < 9)
	{
		printf("git num %d ",i);
		scanf("%d",&n);
		if(n < 0)
			continue;
		s = s + n;
		i++;
	}
	printf("the sam %d\n",s);
}
int main()
{
	ft_continue();
}	
