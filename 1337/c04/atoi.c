#include<stdio.h>
int atoi(char *s)
{
	int i;
	i = 0;
	int p = 0;
	int res = 0;
	while(s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
 		  	|| s[i] == '\f'|| s[i] == '\r'|| s[i] == ' ')
	{
		i++;
	}
	while(s[i] == '+' || s[i] == '-')
	{
		if(s[i] == '-')
			p++;
		i++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res *10 + (s[i] - '0');
		i++;
	}
	if((p%2!= 0))
	{
		res = res * (-1);
	}
	return(res);
}
int main()
{
	int b = atoi("  ++--1337fef");
	printf("%d\n",b);
}
