#include<stdio.h>
#include<string.h>
char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while(dest[j] != '\0')
	{
		j++;
	}
	while(src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return dest;
}
int main()
{
	 printf("Exercice 02 : ft_strcat \n\n");
  char str1[100] = "Hello, ", str2[] = "mfagri to 42";
  char str3[100] = "Hello, ", str4[] = "mfagri to 42";

  ft_strcat(str1, str2);
  printf("Result: %s\n\n", str1);

  strcat(str3, str4);
  printf("Expected outcome: %s \n", str3);
}
