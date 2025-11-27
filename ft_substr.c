/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:36:38 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/27 14:27:01 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	int				copy;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	copy = s_len - start;
	if (copy > (int)len)
		copy = len;
	if (copy < 0)
		copy = 0;
	sub = malloc((copy + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	if (copy > 0)
		ft_strlcpy(sub, (char *)s + start, copy + 1);
	else
		sub[0] = 0;
	return (sub);
}
