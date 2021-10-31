#include<stdio.h>
char *ft_strcapitalize(char *str)
{
	int i;
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i=1;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] =str[i] + 32;
		}
		if((str[i - 1] < 48)
			||(str[i - 1] > 57 && str[i - 1] < 65)
			||(str[i - 1] > 90 && str[i - 1] < 97)
			||(str[i -1] > 122 && str[i - 1] < 127))
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}
int main()
{
	char v[] = "abcd marwan fagri";
	char *c = ft_strcapitalize(v);
	printf("%s",c);
}
