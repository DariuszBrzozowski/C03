char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char 	*out;
	unsigned int 	i;
	i = 0;
	out = dest;
	while (*dest != '\0')
		dest++;
	while (i < nb && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return out;
}
/*
int main(int argc, char *argv[])
{
#include <string.h>
#include <stdio.h>
	char o[5] = "Darek";
	char u[5] = "Darek";

	if (argc > 1)
	{
		printf("original function: %s\n", strncat(o, argv[1], 3));
		printf("user defined function: %s\n", ft_strncat(u, argv[1], 3));
	}
}
*/
