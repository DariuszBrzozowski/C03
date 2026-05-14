int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		i = i + *s1 - *s2;
		if (i != 0)
			return (i);
		s1++;
		s2++;	
	}
	return (0);
}

int main(int argc, char *argv[])
{
#include <string.h>
#include <stdio.h>

	if (argc == 3)
	{
		printf("original function: %d\n", strcmp(argv[1], argv[2]));
		printf("user defined function: %d\n", ft_strcmp(argv[1], argv[2]));
	}
}



