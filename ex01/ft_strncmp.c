int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && (i < n))
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;	
	}
	return (0);
}
/*
int main(int argc, char *argv[])
{
#include <string.h>
#include <stdio.h>

	if (argc > 1)
	{
		printf("original function: %d\n", strncmp(argv[1], argv[2], 5));
		printf("user defined function: %d\n", ft_strncmp(argv[1], argv[2],5));
	}
}
	*/



