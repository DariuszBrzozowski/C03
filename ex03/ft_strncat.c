/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrzozow <dbrzozow@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:01:15 by dbrzozow          #+#    #+#             */
/*   Updated: 2026/05/21 12:24:45 by dbrzozow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*out;
	unsigned int		i;

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
	return (out);
}

int main(int argc, char *argv[])
{
#include <string.h>
#include <stdio.h>
	char o[7] = "Darek";
	char u[7] = "Darek";

	if (argc > 1)
	{
		printf("original function: %s\n", strncat(o, argv[1], 3));
		printf("user defined function: %s\n", ft_strncat(u, argv[1], 3));
	}
}

