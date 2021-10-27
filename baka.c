#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
char *mar(char *s,char c)
{
        int i,j;
        char *v = malloc(strlen(s)*sizeof(char));
        i = 0;
        j = 0;
        while(s[i] != '\0')
        {
                if(s[i] != c)
                {
                        v[j] = s[i];
                        j++;
                }
                i++;
        }
        v[j] = '\0';
    return v;

}
int main()
{
        printf("%s",mar("marouane fagri",'a'));
}
