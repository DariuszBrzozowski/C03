char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;
	
	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (temp);
}
char	*ft_strcat(char *dest, char *src)
{
	char	*out;

	out = dest;
	while (*dest != '\0')
	{
		dest++;	
	}
	ft_strcpy(dest, src);
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
		printf("original function: %s\n", strcat(o, argv[1]));
		printf("user defined function: %s\n", ft_strcat(u, argv[1]));
	}
}



