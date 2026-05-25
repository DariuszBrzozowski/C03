/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrzozow <dbrzozow@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:16:17 by dbrzozow          #+#    #+#             */
/*   Updated: 2026/05/21 08:29:24 by dbrzozow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	s_len = ft_strlen(src);
	while (d_len < size && dest[d_len] != '\0')
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] != '\0' && d_len + i < size - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

int	main(int argc, char *argv[])
{
#include <string.h>
#include <stdio.h>
	char	o[10] = "Darek";
	char	u[10] = "Darek";

	if (argc > 1)
	{
		printf("original function: %zu\n", strlcat(o, argv[1], 13));
		printf("user defined function: %u\n", ft_strlcat(u, argv[1], 13));
		printf("original str: %s\n", o);
		printf("user str: %s\n", u);
	}
}
