unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	s_len = 0;
	while (src[s_len])
		s_len++;
	while (d_len < size && dest[d_len] != '0')
		d_len++;
	if (d_len == size)
		return (d_len + s_len);
	i = 0;
	while (src[i] != '0' && d_len + i < size - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
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
*/
