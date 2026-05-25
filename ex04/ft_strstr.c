/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrzozow <dbrzozow@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:07:52 by dbrzozow          #+#    #+#             */
/*   Updated: 2026/05/21 12:51:24 by dbrzozow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (to_find[i] != '\0' && str[i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (NULL);
}

int     main(int argc, char *argv[])
{
        #include <string.h>
        #include <stdio.h>
        if (argc > 2)
        {
                printf("original: %s\n", strstr(argv[1], argv[2]));
                printf("user written: %s\n", ft_strstr(argv[1], argv[2]));
        }
}
