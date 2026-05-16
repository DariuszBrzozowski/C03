unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int    i;
        unsigned int    j;
        i = 0;

        while (src[i] != '\0')
        {
                if (i < size - 1)
                        dest[i] = src[i];
                i++;
        }
        j = i;

        while (i < size)
        {
                dest[i] = '\0';
                i++;
        }

        return (j);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int out;

	out = 0;
	while (*dest != '\0')
	{
		out++;
		dest++;	
	}
	out = out + ft_strlcpy(dest, src, size);
	return (out);
}

int main(int argc, char *argv[])
{
#include <string.h>
#include <stdio.h>
	char o[10] = "D";
	char u[10] = "D";

	if (argc > 1)
	{
		printf("original function: %zu\n", strlcat(o, argv[1], 10));
		printf("user defined function: %u\n", ft_strlcat(u, argv[1], 10));
	}
}



