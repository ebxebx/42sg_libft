/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 20:18:36 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/19 16:16:48 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// void ft_print_memory(void *addr, unsigned int size);
// int	main(void)
// {
// 	char	*src;
// 	char	dest[16] = "----------------";

// 	src = "Hello!";
// 	printf("Print memory for src: %s\n", src);
// 	ft_print_memory(src, 16);
// 	//printf("\n");
// 	printf("Print memory for dest: %s\n", dest);
// 	ft_print_memory(dest, 16);
// 	ft_strlcpy(dest, src, 3);
// 	printf("Print memory for dest after strlcpy(dest, src, 3): %s\n", dest);
// 	ft_print_memory(dest, 16);
// 	printf("\n");

// 	ft_strlcpy(dest, "645", 5);
// 	printf("Print memory for dest after strlcpy(dest, \"645\", 5): %s\n", dest);
// 	ft_print_memory(dest, 16);

// 	ft_strlcpy(dest, "777", 0);
// 	printf("Print memory for dest after strlcpy(dest, \"777\", 0): %s\n", dest);
// 	ft_print_memory(dest, 16);
// 	printf("\n");

// 	return (1);
// }
