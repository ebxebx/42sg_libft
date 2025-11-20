/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:57:12 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/20 16:25:15 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) - 1;
	if (i == -1)
		i = 0;
	while (s[i] && i >= 0)
	{
		if (s[i] == c)
			break ;
		i--;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
