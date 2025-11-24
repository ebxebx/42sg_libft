/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:36:02 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/24 16:54:42 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, unsigned int size)
{
	int				cmp_rst;
	unsigned int	i;

	if (*to_find == '\0')
		return (str);
	cmp_rst = -1;
	i = 0;
	while (str[0] != 0 && i < size)
	{
		if (ft_strlen(to_find) > size - i)
			break ;
		cmp_rst = ft_strncmp(str, to_find, ft_strlen(to_find));
		if (cmp_rst == 0)
			break ;
		str++;
		i++;
	}
	if (cmp_rst == 0)
		return (str);
	else
		return (NULL);
}

// without use ft_strncmp
/* char	*ft_strnstr(char *str, char *to_find, unsigned int size)
{
	int				found;
	unsigned int	i;
	unsigned int	j;

	if (*to_find == '\0')
		return (str);
	found = -1;
	i = 0;
	while (str[i] != 0 && i < size)
	{
		j = 0;
		while (j < ft_strlen(to_find) && (i + j <= size - 1)
			&& str[i + j] && (str[i + j] == to_find[j]))
			j++;
		if (j == ft_strlen(to_find))
		{
			found = 1;
			break ;
		}
		i++;
	}
	if (found > 0)
		return (&str[i]);
	else
		return (NULL);
} */

// #include <stdio.h>
// //void	*ft_print_memory(void *addr, unsigned int size);
// int	main(void)
// {
// 	char	*src;
// 	char	*find;

// 	src = "Hello!";
// 	find = "ll";
// 	printf("Find %s from %s\n", src, find);
// 	printf("Found: %s", ft_strstr(src, find));

// 	src = "Hello!";
// 	find = "aaa";
// 	printf("Find %s from %s\n", src, find);
// 	printf("Found: %s", ft_strstr(src, find));

// 	printf("\n");

// 	return (1);
// }