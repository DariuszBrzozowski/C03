char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int    i;

        i = 0;
        while (i < n  && src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }

        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }
        return (dest);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*out;

	out = dest;
	while (*dest != '\0')
	{
		dest++;	
	}
	ft_strncpy(dest, src, nb);
	return (out);
}

int main(int argc, char *argv[])
{
#include <string.h>
#include <stdio.h>
	char o[20] = "Darek";
	char u[20] = "Darek";

	if (argc > 1)
	{
		printf("original function: %s\n", strncat(o, argv[1], 10));
		printf("user defined function: %s\n", ft_strncat(u, argv[1], 10));
	}
}



