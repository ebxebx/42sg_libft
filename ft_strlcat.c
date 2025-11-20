/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:59:25 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/19 15:29:15 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

// static int	ft_strlen(char *str)
// {
// 	int	l;

// 	l = 0;
// 	while (str[l] != '\0')
// 	{
// 		l++;
// 	}
// 	return (l);
// }

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	int	i;
// 	int	src_len;
// 	int	dest_len;
// 	int	dest_free;
// 	int	orig_dest_len;

// 	src_len = ft_strlen(src);
// 	dest_len = ft_strlen(dest);
// 	orig_dest_len = dest_len;
// 	if (dest_len > (int)size)
// 		dest_len = size;
// 	if (size == 0 || dest_len == (int)size)
// 		return (src_len + orig_dest_len);
// 	dest_free = size - dest_len - 1;
// 	i = 0;
// 	while (i < dest_free && src[i] != 0)
// 	{
// 		dest[dest_len + i] = src[i];
// 		i++;
// 	}
// 	if (dest_len + i < (int)size)
// 		dest[dest_len + i] = '\0';
// 	return (dest_len + src_len);
// }

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	to_copy;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (src_len + size);
	to_copy = size - dest_len - 1;
	i = 0;
	while (src[i] && i < to_copy)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

// Check test.main.c for testing