#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	_found;
	char	*out;

	if (*to_find == '\0')
		return (str);
	_found = 0;
	while (*str != '\0')
	{
		if (*str == to_find[_found])
		{
			if (_found == 0)
				out = str;
			_found++;
		}
		else
			_found = 0;

		if (to_find[_found] == '\0')
			return (out);
		str++;
	}
	return ('\0');
}
/*
int     main(int argc, char *argv[])
{
        #include <string.h>
        #include <stdio.h>
        if (argc > 2)
        {
                printf("original: %s\n", strstr(argv[1], argv[2]));
                printf("user written: %s\n", ft_strstr(argv[1], argv[2]));
        }
}*/
