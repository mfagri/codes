#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c,1);
}
void	ft_ishex(unsigned char b)
{
	char *c;
	c = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(c[b / 16]);
	ft_putchar(c[b % 16]);
}
void	ft_putstr_non_printable(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if((unsigned char )str[i] > '~' || (unsigned char) str[i] < ' ')
		{
			ft_ishex((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
