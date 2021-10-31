#include<unistd.h>
#include<limits.h>
void ft_putchar(char s)
{
	write(1,&s,1);
}
void ft_putnbr(int b)
{
	if(b <= INT_MAX && b >= INT_MIN)
	{
	if(b == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if(b < 0)
	{
		ft_putchar('-');
		ft_putnbr(-b);
	}
	else if(b > 9)
	{
		ft_putnbr(b/10);
		ft_putnbr(b%10);
	}
	else
	{
		write(1,&"0123456789"[b],1);
	}
	}
}
int main()
{
	ft_putnbr(INT_MIN);
}
