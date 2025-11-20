/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:10:09 by zchoo             #+#    #+#             */
/*   Updated: 2025/08/13 19:56:40 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		dest_len;
	int		i;

	dest_len = ft_strlen(src) + 1;
	dest = malloc(dest_len);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < dest_len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
	char *src;

	src = "Aaa";
	printf("src: %s, dest: %s\n", src, ft_strdup(src));
} */