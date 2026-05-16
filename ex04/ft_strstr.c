int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	is_found;
	int	i;
	int	j;

	i = ft_strlen(to_find);

	if (*to_find == '\0')
		return str;

	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			j = 0;
			is_found = 1;
			while (j < i && is_found == 1)
			{
				if (str[j] != to_find[j])
					is_found = 0;
				j++;
			}
			if (is_found == 1)
				return (str);
		}
	str++;
	}
return ('\0');
}

int	main(int argc, char *argv[])
{
	#include <string.h>
	#include <stdio.h>
	if (argc > 2)
	{
		printf("original: %s\n", strstr(argv[1], argv[2]));
		printf("user written: %s\n", ft_strstr(argv[1], argv[2]));
	}
}
